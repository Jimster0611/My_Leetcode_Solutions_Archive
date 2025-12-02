class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        /*
        koko has h hours to each all bananas of each pile

        choose smallest eating rate such that everything is ate

        minus everything 


        eating rate is 0 - max number of everyuthing

        if pile size is greater than h return
        */

        long long smallest_num = 1, largest_num = 0, smallest_speed = INT_MAX;

        for (long long i = 0; i < piles.size(); i++) {
            largest_num = max(largest_num, (long long)piles[i]);
        }
        while (smallest_num <= largest_num)
        {
            long long median = ((largest_num - smallest_num) / 2) + smallest_num; 
            long long eating_time = 0; // hours needed to finish,
            // hours must be less than or equal to h
            // if time is greater than h, increas eeating speed
            for (long long k = 0; k < piles.size(); k++) {
                eating_time += ((long long)piles[k]+median-1)/median;
            }
            if (eating_time <= h) {
                smallest_speed = min(smallest_speed, median);
                largest_num = median - 1;
            }
            else {
                smallest_num = median + 1;
            }

        }
    return smallest_speed;
    }
};
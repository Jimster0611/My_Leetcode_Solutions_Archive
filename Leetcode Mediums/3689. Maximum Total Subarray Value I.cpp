class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        /*
        want to return max possible total val

        value is max element of sub - min element of sub

        we are to choose k sub arrays, add up their inherent values


        same subarray may be chosen more than once...
        choose the best subarray and repeat it... k times

        find max, find min of function, we know they are continous, minus 
        multiple k times
        */
        long long biggest_element = INT_MIN, smallest_element = INT_MAX;

        for (long long i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= biggest_element)
                biggest_element = nums[i];
            
            if (nums[i] <= smallest_element)
                smallest_element = nums[i];
        }

        return k * (biggest_element - smallest_element);
    }
};
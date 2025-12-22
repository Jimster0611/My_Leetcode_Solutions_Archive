class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        /*
        want every character in teh string to be equal

        simply have a map, consisting of charcters
        and their cost


        cheapest one is taken
        */
        map<char, long long > mappy;
        long long sum_total = 0;

        for (long long  i = 0; i < cost.size(); i++)
            {
                mappy[s[i]] += cost[i];
                sum_total += cost[i];
            }

        long long  most_expensive = INT_MIN;

        for (auto i: mappy)
            {
                most_expensive = max(most_expensive, i.second);
            }
        return sum_total - most_expensive;
    }
};
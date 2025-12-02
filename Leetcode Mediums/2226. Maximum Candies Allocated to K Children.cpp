class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        /*
we know that our answer is
every kid gets 0 ---> max(candies) candy per child

thus our goal then is to find what that number is:

approach:
use binary search

    divide each number by our binary target
    sum it up to counter, if counter greater or equal to k then move up/update

code not working rn save code
        */

    sort(candies.begin(), candies.end());

    long long i = 1, j = 1, biggest_num_found = 0;

    for (int x = 0; x < candies.size(); x++) 
        j = max(j, (long long)candies[x]);

    while (i <= j)
    {
        long long middle_index = ((j-i)/2)+i, child_collector = 0;

        for (int k = 0; k < candies.size(); k++) {
            child_collector += ((long long)candies[k])/middle_index;
        }
        if (child_collector >= k) {
            biggest_num_found = middle_index;
            i = middle_index + 1;
        }
        else {
            j = middle_index - 1;
        }
        
    }
    
    return biggest_num_found;

        
    }
};
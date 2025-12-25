class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        /*
        to make sum of array divisible by k
        i.e, make modus of it 
        return modus
        */
        int sum_of_array = 0;
        for (auto i : nums) sum_of_array += i;

        return sum_of_array % k;
    }
};
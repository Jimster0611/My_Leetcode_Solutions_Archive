class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*
        approach:
        begin from left, traverse to the right

        declare an int sum varaible
        see if add current, if it creates a bigger number
        i fnumber is less than zero just restart

        continuous increment the max sum
        */

        int largestSum = nums[0], currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (currentSum < 0) currentSum = 0;
            currentSum += nums[i];
            
            largestSum = max (largestSum, currentSum);
        }

        return largestSum;


    }
};
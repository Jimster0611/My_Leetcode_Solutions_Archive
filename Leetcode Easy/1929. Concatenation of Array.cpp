class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> concat;
        for (int j = 0; j < 2; j++)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                concat.push_back(nums[i]);
            }
        }
        return (concat);
    }
};

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        /*
For remainder 1:
➤ remove one element with remainder 1
➤ or two elements with remainder 2

For remainder 2:
➤ remove one element with remainder 2
➤ or two elements with remainder 1

        */
        vector<int> modulu1, modulu2;
        sort(nums.begin(), nums.end());
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            sum += num;
            if (num % 3 == 1) modulu1.push_back(num);
            else if (num % 3 == 2) modulu2.push_back(num); // equivalent to else
        }
        
        //case 1, it's divisible by 3 all is good, just return answer

        //case 
        int smallest = INT_MAX;
        if (sum % 3 == 1)
        {
            if (!modulu1.empty())
                smallest = min(smallest, modulu1[0]);
            if (modulu2.size() > 1)
                smallest = min(smallest, modulu2[0] + modulu2[1]);
            sum -= smallest;
        }
        //case 3,
        if (sum % 3 == 2)
        {
            if (!modulu2.empty())
                smallest = min(smallest, modulu2[0]);
            if (modulu1.size() > 1)
                smallest = min(smallest, modulu1[0] + modulu1[1]);
            sum -= smallest;
        }

        return sum;
    }
};
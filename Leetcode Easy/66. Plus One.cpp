class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> reversed = digits;
        //reversed to work with rn
        reverse(reversed.begin(), reversed.end());

        bool carry_over_one = false;
        for (int i = 0; i < reversed.size(); i++)
        {
            if (reversed[i] == 9)
            {   
                reversed[i] = 0;
                carry_over_one = true;
            }
            else
            {
                reversed[i]++;
                carry_over_one = false;
                break;
            }
        }
        if (carry_over_one) reversed.push_back(1);

        //our answer
        reverse(reversed.begin(), reversed.end());
        return reversed;
    }
};
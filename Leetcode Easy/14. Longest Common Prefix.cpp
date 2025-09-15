class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 1) return strs[0];//edge case

        /*
        fidn the smallest word char count
        for loop will go through every letter the smallest word char count
        will terminate if nto same, else a ends pushes
        */

        string longestPrefix = "";
        int j = 0;

        while (true)
        {
            for (int i = 1; i < strs.size(); i++)
            {
                //if char does not match or is out of range, return the prefix upto this point
                if (j >= strs[i].size() || strs[i][j] != strs[0][j]) return longestPrefix;
            }
            if (!strs[0].empty() && j < strs[0].size()) longestPrefix += strs[0][j];

            j++;//all is good, we check to see if the next char matches
        }
        
        return longestPrefix;
    }
};

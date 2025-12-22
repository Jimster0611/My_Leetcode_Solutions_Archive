class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        /*

        */

        map<pair<int,int>, int> lis;

        int string_length = strs[0].size();

        for (int i = 0; i < strs.size(); i++)
        {
            int j = 0, k = 1;
            while (k < string_length)
            {
                string sub = strs[i].substr(j, k-j);
                string duplicate = sub;
                sort(sub.begin(), sub.end());

                if (sub == duplicate) //valid lis
                {
                    lis[{j, k}]++;
                    k++;
                }
                else //invalid found
                    j++;
                
            }
        }

        int longest_substring = 0;
        // will go through checking if the keys have map value
        for (auto i : lis)
        {
            if (i.second == strs.size())
                longest_substring = max(longest_substring, i.first.second - i.first.first);
        }



        return longest_substring;
    }
};
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {

        int counter = 0;

        for (int i = 0; i < strs[0].size(); i++)
        {
            string temporary = "";
            for (int k = 0; k < strs.size(); k++)
            {
                temporary+=strs[k][i];
            }
            string duplicate = temporary;
            sort(temporary.begin(), temporary.end());

            if (duplicate != temporary) 
                counter++;

        }
        return counter;
    }
};
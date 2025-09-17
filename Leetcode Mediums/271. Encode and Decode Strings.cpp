class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string encoded;

        for (int i = 0; i < strs.size(); i++)
        {
            for (int j = 0; j < strs[i].size(); j++)
            {
                encoded+=strs[i][j];
            }
            encoded+='`';
        }
        return encoded;
    }

    vector<string> decode(string s) 
    {
        
        vector<string> decodedVector;

        string tempHolder = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '`')
            {
                decodedVector.push_back(tempHolder);
                tempHolder = "";
            }
            else tempHolder+=s[i];
        }
        
        return decodedVector;
    }


};

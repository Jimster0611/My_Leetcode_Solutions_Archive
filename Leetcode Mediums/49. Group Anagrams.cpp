class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string, vector<string>> mappy;

    for (int i = 0; i < strs.size(); i++)
    {
        string tempCopy = strs[i];
        sort(tempCopy.begin(), tempCopy.end());
        mappy[tempCopy].push_back(strs[i]);
    }

        vector<vector<string>> answer;

        for (auto i: mappy)//go trough the map's keys
        {
            vector<string> temporary;
            for (auto j : i.second)
            {
                temporary.push_back(j);
            }
            answer.push_back(temporary);
        }

        return answer;
    }
};

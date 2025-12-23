class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        /*
        given a list of chars called chars

        see if each string's char count is in their, if yes good, if not return bad


        this is a frequency table problem

        we will create duplicates of freqency table every time
        we check the individual words in words
        */
        int number_chars = 0;

        //below lines of code create the freqnecy table
        vector<int> frequnecy_table (26, 0);
        for (int i = 0; i < chars.size(); i++) frequnecy_table[chars[i] - 'a']++;

        for (int i = 0; i < words.size(); i++) {
            vector<int> duplicate_table = frequnecy_table;
            bool valid = true;
            for (int j = 0; j < words[i].size(); j++) {
                duplicate_table[words[i][j] - 'a']--;
                if (duplicate_table[words[i][j] - 'a'] < 0) valid = false;
            }
            if (valid) number_chars+= words[i].size();
        }

        return number_chars;
    }
};
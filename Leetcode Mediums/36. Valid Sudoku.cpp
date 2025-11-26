class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        /*
        goal is to run some greedy algorithim
        check conditions that make it valid
        if conditiosn fail, return false

        otherwise all conditiosn checked return true



        one check:
        check if there are duplicates in each 3 by 3

        check if there duplicates in the rows
        check if there are duplicates in the coloumns

        simply just traverse and check i believe?...
        */

        map<int, int> frequencyTable;

        //will check left to right 
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                frequencyTable[board[i][j]] += 1;
                if (board[i][j] != '.' && frequencyTable[board[i][j]] > 1) 
                    return false;
            }
            frequencyTable.clear();
        }

        //will check top to bottom
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                frequencyTable[board[j][i]] += 1;
                if (board[j][i] != '.' && frequencyTable[board[j][i]] > 1) 
                    return false;
            }
            frequencyTable.clear();
        }

        /*
        for this consider doing some kind of number%3
        
        */
        //will check 3 by 3 coloumns
        for (int i = 0; i < board.size(); i+=3)
        {
            for (int j = 0; j < board[i].size(); j+=3)
            {
                for (int k = i; k < i+3; k++)
                {
                    for (int l = j; l < j+3; l++)
                    {
                        frequencyTable[board[k][l]] += 1;
                        if (board[k][l] != '.' && frequencyTable[board[k][l]] > 1) 
                            return false;
                    }
                }
                frequencyTable.clear();
            }
        }
        return true;
    }
};
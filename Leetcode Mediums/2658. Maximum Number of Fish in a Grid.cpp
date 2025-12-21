class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        /*
        lets fing go, did with bfs from pure memory
        rrrrrrrrrrrrraaaaaaaaaaaaa
        
        */
        int row = grid.size();
        int coloumns = grid[0].size();
        vector<vector<bool>> checker(row, vector<bool>(coloumns, false));

        int greatest_count = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < coloumns; j++)
            {
                queue<pair<int, int>> queue_line;
                int counter = 0;
                
                if (grid[i][j] > 0 && checker[i][j] == false)
                {
                    checker[i][j] = true;
                    counter += grid[i][j];
                    queue_line.push({i, j});
                }
                //while queue line not empty
                while (!queue_line.empty())
                {
                    pair<int, int> p = queue_line.front();
                    queue_line.pop();
                    int p_row = p.first;
                    int p_coloumn = p.second;

                    if (p_row + 1 < row && grid[p_row+1][p_coloumn] > 0 &&
                    checker[p_row+1][p_coloumn] == false)
                    {
                        checker[p_row+1][p_coloumn] = true;
                        queue_line.push({p_row+1, p_coloumn});
                        counter += grid[p_row+1][p_coloumn];
                    }
                    if (p_row - 1 >= 0 && grid[p_row-1][p_coloumn] > 0 &&
                    checker[p_row-1][p_coloumn] == false)
                    {
                        checker[p_row-1][p_coloumn] = true;
                        queue_line.push({p_row-1, p_coloumn});
                        counter += grid[p_row-1][p_coloumn];
                    }
                    if (p_coloumn + 1 < coloumns && grid[p_row][p_coloumn+1] > 0 &&
                    checker[p_row][p_coloumn+1] == false)
                    {
                        checker[p_row][p_coloumn+1] = true;
                        queue_line.push({p_row, p_coloumn+1});
                        counter += grid[p_row][p_coloumn+1];
                    }
                    if (p_coloumn - 1 >= 0 && grid[p_row][p_coloumn-1] > 0 &&
                    checker[p_row][p_coloumn-1] == false)
                    {
                        checker[p_row][p_coloumn-1] = true;
                        queue_line.push({p_row, p_coloumn-1});
                        counter += grid[p_row][p_coloumn-1];
                    }
                }
                greatest_count = max(greatest_count, counter);

            }
        }
        return greatest_count;
    }
};
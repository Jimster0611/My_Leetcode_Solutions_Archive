class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int row = grid.size();
        int coloumn = grid[0].size();
        vector<vector<bool>> checker(row, vector<bool>(coloumn, false));
        
        //value to be returned, i.e, the greatest island size
        int master_counter = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < coloumn; j++)
            {
                queue<pair<int,int>> queue_list;
                int current_counter = 0;
                
                //checks to see if it found a piece of the island
                if (grid[i][j] == 1)
                {
                    queue_list.push({i,j});
                    checker[i][j] = true;
                    current_counter += 1;
                }

                //while loop here will check the total size of the island
                while (!queue_list.empty())
                {
                    //below chunch grabs the front of queue, and pops
                    pair<int, int> front_element = queue_list.front();
                    queue_list.pop();
                    int row_e = front_element.first;
                    int coloumn_e = front_element.second;

                    //below will check the cardinal directions to append to queue
                    if (row_e + 1 < row && grid[row_e+1][coloumn_e] == 1 && 
                    checker[row_e+1][coloumn_e] == false)
                    {
                        checker[row_e+1][coloumn_e] = true;
                        current_counter += 1;
                        queue_list.push({row_e + 1, coloumn_e});

                    }
                    if (row_e - 1 >= 0 && grid[row_e-1][coloumn_e] == 1 && 
                    checker[row_e-1][coloumn_e] == false)
                    {
                        checker[row_e-1][coloumn_e] = true;
                        current_counter += 1;
                        queue_list.push({row_e - 1, coloumn_e});

                    }
                    if (coloumn_e + 1 < coloumn && grid[row_e][coloumn_e+1] == 1 && 
                    checker[row_e][coloumn_e+1] == false)
                    {
                        checker[row_e][coloumn_e+1] = true;
                        current_counter += 1;
                        queue_list.push({row_e, coloumn_e+1});

                    }
                    if (coloumn_e - 1 >= 0 && grid[row_e][coloumn_e-1] == 1 && 
                    checker[row_e][coloumn_e-1] == false)
                    {
                        checker[row_e][coloumn_e-1] = true;
                        current_counter += 1;
                        queue_list.push({row_e, coloumn_e-1});

                    }
                }
                master_counter = max(master_counter, current_counter);
            }
        }

    return master_counter;
    }
};
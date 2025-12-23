class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        

        /*
        will count 1's 

        2nd for loop will check if security possible (i.e, tere are 0s)
        could be continous even

        will check untill it finds a 1 or 0, if finds 1, ensure 
        distance is greater than 1 or something
        */
        map<int, int> devices;
        for (int i = 0; i < bank.size(); i++)
        {
            for (int j = 0; j < bank[i].size(); j++)
            {
                devices[i] += bank[i][j] - '0';
            }
        }

        int laser_beams = 0;
        for (int i = 0; i < devices.size(); i++)
        {
            if (devices[i] > 0)
            {
                for (int j = i+1; j < devices.size(); j++)
                {
                    if (devices[j] > 0)
                    {
                        laser_beams += devices[i] * devices[j];
                        break;
                    }
                }
            }
        }
        return laser_beams;
    }
};
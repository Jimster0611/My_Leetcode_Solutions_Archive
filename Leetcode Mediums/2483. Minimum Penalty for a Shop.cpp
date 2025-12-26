class Solution {
public:
    int bestClosingTime(string customers) {
       /*
        shop open no customer, -1

        shope closed but customer, -1

        return when to close such that least min penalty (earliest time)

        coukd create a for loop with 
            hours 0 to close time
            and determine number of 0's

            close at the latests 0
       */ 
       int num_Y = 0, num_N = 0;
       for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y') num_Y++;
        }

        vector<int> closing_times;
        for (int i = 0; i < customers.size(); i++)
        {
            closing_times.push_back(num_Y + num_N);
            customers[i] == 'Y' ? num_Y-- : num_N++;
        }
        closing_times.push_back(num_Y + num_N);//last eleemtn

        int smallest_index = 0, smallest_value = INT_MAX;
        for (int i = 0; i < closing_times.size(); i++)
        {
            if (closing_times[i] < smallest_value)
            {
                smallest_value = closing_times[i];
                smallest_index = i;
            }
        }
       
        return smallest_index;
    }
};
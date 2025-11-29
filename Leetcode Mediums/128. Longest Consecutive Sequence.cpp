class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        
        /*
        put elements into set
        apply same traversal logic

        note: nlogn solutin :/, not as requested by problem
        */

        set<int> set_nums(nums.begin(), nums.end());


        int largest_sequence = 0, temp_counter = 1;

        if (set_nums.size() == 0)
            return largest_sequence;  // edge case here

        int previous_element = *set_nums.begin();

        for (int number : set_nums)
        {
            if (number != previous_element + 1)
                temp_counter = 1;
            else
                temp_counter++;
            
            previous_element = number;
            largest_sequence = max(largest_sequence, temp_counter);
        }


        

        return largest_sequence;


    }
};
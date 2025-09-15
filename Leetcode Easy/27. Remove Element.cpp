class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int occurences = 0;//tells us how many elements are equal to val

        /*
        approach:
        2 pointer, move elements equal to val to the back of the vect
        return the vect without the elements in the back of the array

        account foor edge case of less than 2 elements
        */
        
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0] == val ? 0 : 1;


        int i = 0, j = nums.size()-1;
        while (i <= j)
        {
            if (nums[i] == val && nums[j] != val)
            {
                //swap performed
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                
                occurences++; 
                i++; j--;
            }
            else if (nums[i] == val && nums[j] == val)
            {
                occurences++;
                j--;
            }
            else if (nums[i] != val)
            {
                i++;
            }
        }

    //return vector<int>(nums.begin(), nums.end() - occurences);
    return nums.size()-occurences;
    }
};

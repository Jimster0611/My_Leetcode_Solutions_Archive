class Solution {
public:
    void sortColors(vector<int>& nums) {

        int a = 0, b = 0, c = 0; //a denoted as '0', b denoted as '1' and etc
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0) a++;
            else if (nums[i] == 1) b++;
            else if (nums[i] == 2) c++;
        }

        int i = 0;//track current postion of vector
        while (a != 0 || b !=0 || c != 0)
        {
            if (a!= 0) 
            {
                nums[i] = 0; 
                a--;
            }
            else if (b!= 0) 
            {
                nums[i] = 1; 
                b--;
            }
            else if (c!= 0) 
            {
                nums[i] = 2; 
                c--;
            }
            i++;
        }
    
    }
};

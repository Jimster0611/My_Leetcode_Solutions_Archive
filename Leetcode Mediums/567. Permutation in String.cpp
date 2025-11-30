class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       /*
        slidign window approach
        
        edge case condtions:
        if window of 1 is bigger than s2 return false
        
        traverse through s2 with window of size s1, if s1 in s2 window return true
        check if its the reversed of the first?

       */ 

        // edge case
        if (s1.size() > s2.size()) return false;

        sort(s1.begin(), s1.end());

        bool found_sub_permutation = false;
        int i = 0;

        while (i+s1.size()-1 < s2.size())
        {
            string permutation = s2.substr(i, s1.size());
            sort(permutation.begin(), permutation.end());

            if (s1 == permutation)
            {
                found_sub_permutation = true;
                break;
            }
            i++;
        }


        return found_sub_permutation;
    }
};
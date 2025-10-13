class Solution {
public:
    bool isPalindrome(string s) {
        
        /*
        approachh:
        usiong ascii vvalue tables

        check through all string
        
        if the ascci value is within A - Z 
            append the lowercase version
        
        if a - z or 0 - 9
            append it to teh palindrome string

        at end, check if palindrome
        */

        //below chunk of code creates a string duplicate with only alphanumeric letters
        string palindrome = "";
        for (int i = 0; i < s.size(); i++)
        {
            int asciiValue = int(s[i]);

            //detects if its an upper case letter, add smaller case equivalent
            if (asciiValue >= 65 && asciiValue <= 90) 
                palindrome += char(asciiValue + 32);

            //add letter to palindrome if lowercase letter
            else if (asciiValue >= 97 && asciiValue <= 122 
                     || asciiValue >= 48 && asciiValue <= 57) 
                palindrome += char(asciiValue);            
        }


        string palindromeReversed = palindrome;
        reverse(palindromeReversed.begin(), palindromeReversed.end());
        
        return palindrome == palindromeReversed;
    }
};
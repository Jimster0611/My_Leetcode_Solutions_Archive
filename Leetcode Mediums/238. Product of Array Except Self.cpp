class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

    vector<int> prefix = {1}, suffix = {1};
    //create our prefix vect
    for (int i = 0; i < nums.size()-1; i++){
        prefix.push_back(prefix[i] * nums[i]);
    }
    
    //create our suffix vect
    for (int i = nums.size()-1; i > 0; i--){
        suffix.push_back(suffix[suffix.size()-1] * nums[i]);
    }
    reverse(suffix.begin(), suffix.end());

    //below deals with creating and returning the answer 
    vector<int> answer;
    for (int i = 0; i < prefix.size(); i++){
        answer.push_back(prefix[i] * suffix[i]);
    }
    return answer;
    }
};
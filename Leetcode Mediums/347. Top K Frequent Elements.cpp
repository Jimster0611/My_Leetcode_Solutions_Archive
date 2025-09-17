class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        /*
        map to track frequency
        convert map to vector pair to be sorted
        sort 
        return vector<int>(vector.begin(), vector.begin()+k)
        */
        
        //map created and keys and # occurences inserted into map
        map<int, int> frequencyTable;
        for (int i = 0; i < nums.size(); i++) frequencyTable[nums[i]]++;
        
        //vect pair created, map contents transferd to vector
        vector<pair<int,int>> pairs;
        for (auto i : frequencyTable) pairs.push_back({i.second, i.first});

        //sort vect from greatest to least
        sort(pairs.begin(), pairs.end());
        reverse(pairs.begin(), pairs.end());

        //convert vect pairs to map, only retaining the key and not # of occurences
        vector<int> answer;
        for (int i = 0; i < pairs.size() && i < k; i++) answer.push_back(pairs[i].second);
    

        //ngl hope, harmony has some good food this morning, been eating the same
        //scrambled eggs everyday and its getting kinda boring ;-;
        return answer;

    }
};

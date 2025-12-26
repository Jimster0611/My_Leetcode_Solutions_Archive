class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        /*
        decrement everything by min num
            it creates further subarrays,
            decrement those subarray by min number
            repeat untill reaches end
        */

        int sum = target[0];
        for (int i = 1; i < target.size(); i++)
        {
            if (target[i] > target[i-1])
                sum += target[i] - target[i-1];
        }


        return sum;
    }
};
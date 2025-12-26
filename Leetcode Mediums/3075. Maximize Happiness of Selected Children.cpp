class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        /*
        pick k child
        every time you pick a child, every other child is -1
        */
        long long sum = 0;
        sort(happiness.begin(), happiness.end(), greater<>());

        for (int i = 0; i < happiness.size() && k > 0; i++, k--)
        {
            sum += max(0, happiness[i] - i);
        }

        return sum;
    }
};
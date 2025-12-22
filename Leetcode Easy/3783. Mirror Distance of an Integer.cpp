class Solution {
public:
    int mirrorDistance(int n) {
        string mirrored = to_string(n);
        reverse(mirrored.begin(), mirrored.end());

        int mirrored_int = stoi(mirrored);

        return abs(mirrored_int-n);
    }
};
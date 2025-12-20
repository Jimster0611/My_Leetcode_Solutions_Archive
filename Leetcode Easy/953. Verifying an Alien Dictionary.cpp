class Solution {
public:
bool helperfunction(string& one, string& two, map<char, int>& position) {
    int n = min(one.size(), two.size());

    for (int i = 0; i < n; i++) {
        if (position.at(one[i]) < position.at(two[i]))
            return true;
        if (position.at(one[i]) > position.at(two[i]))
            return false;
        // else equal → keep going
    }

    // all characters equal → shorter word is smaller
    return one.size() <= two.size();
}

    bool isAlienSorted(vector<string>& words, string order) {

        // here we will create a map of positions for quick access
        map<char, int> positions;
        for (int i = 0; i < order.size(); i++) {
            positions[order[i]] = i;
        }

        // goes through all the words
        for (int i = 0; i < words.size()-1; i++) {
            if (!helperfunction(words[i], words[i+1], positions))
                return false;
        }

        return true;
    }
};
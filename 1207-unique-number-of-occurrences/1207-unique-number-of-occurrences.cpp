class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> mapp;
        std::unordered_set<int> occurrenceCounts;
        for (int i : arr) {
            mapp[i]++;
        }
        for (const auto& pair : mapp) {
            if (!occurrenceCounts.insert(pair.second).second) {
                return false;
            }
        }
        return true;
    }
};
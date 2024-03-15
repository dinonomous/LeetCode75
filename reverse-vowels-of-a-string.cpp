class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int start = 0;
        int end = len - 1;
        while (start < end) {
            if (!isalpha(s[start]) || !vowels.count(s[start])) {
                start++;
            } else if (!isalpha(s[end]) || !vowels.count(s[end])) {
                end--;
            } else {
                swap(s[start], s[end]);
                // Skip already swapped vowel
                if (vowels.count(s[start])) {
                start++;
                }
                end--;
            }}
        return s;
    }
};
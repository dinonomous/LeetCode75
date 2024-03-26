class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v1(26,0),v2(26,0);
        for(char a:word1) v1[a-'a']++;
        for(char a:word2) v2[a-'a']++;
        for(int i = 0; i < 26; i++)
            if ((v1[i] == 0 && v2[i] != 0) || (v1[i] != 0 && v2[i] == 0))
                return false;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
    }
};
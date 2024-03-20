class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        int i=0;
        int j=0;
        while(i<s.size()){
            while(j<t.size()){
                if(s[i]==t[j]){
                    count++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(count!=s.size()){
            return false;
        }
        return true;
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;
        map<vector<int>, int> mp;
        for(int i=0; i<n; i++) mp[grid[i]]++;
        for(int i=0; i<n; i++)
        {
            vector<int> temp(n);
            for(int j=0; j<n; j++) temp[j] = grid[j][i];
            if(mp.count(temp)) ans += mp[temp];
        }
        return ans;
    }
};
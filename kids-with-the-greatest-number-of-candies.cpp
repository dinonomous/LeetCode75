class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result; 
        int max=*max_element(candies.begin(), candies.end());
        int i=0;
        while(i<candies.size()){
            if(candies[i]+extraCandies>=max){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
            i++;
        }
        return result;
    }
};
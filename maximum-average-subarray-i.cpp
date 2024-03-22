class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); // fast IO
        double max_sum = INT_MIN;
        double current_sum = 0;
        for (int i = 0; i < k; i++) {
            current_sum += nums[i];
        } 
        max_sum = current_sum;
        for (int i = k; i < nums.size(); i++) {
            current_sum += nums[i] - nums[i - k];
            max_sum = max(max_sum, current_sum);
        }
        return max_sum / k;
    }
};
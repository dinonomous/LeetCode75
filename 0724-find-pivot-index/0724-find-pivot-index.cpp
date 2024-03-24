class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sum_left = 0;
            for (int j = 0; j < i; j++) {
                sum_left += nums[j];
            }
            int sum_right = 0;
            for (int j = i + 1; j < n; j++) {
                sum_right += nums[j];
            }
            if (sum_left == sum_right) {
                return i;
            }
        }
        return -1;
    }
};


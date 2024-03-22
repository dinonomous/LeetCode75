class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        int left = 0; // Pointer to the start of the array
        int right = nums.size() - 1; // Pointer to the end of the array
        int operations = 0;
        
        while (left < right) { // Two pointers traversal
            if (nums[left] + nums[right] == k) { 
                operations++; // Increment operation count
                left++;
                right--;
            } else if (nums[left] + nums[right] < k) { 
                left++; 
            } else { 
                right--; 
            }
        }
        return operations; 
    }
};
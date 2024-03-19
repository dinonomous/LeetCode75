class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        
        for (const int num : nums) {
            if (num != 0) {
                nums[insertPos] = num;
                insertPos++;
            }
        }
        
        while (insertPos < nums.size()) {
            nums[insertPos] = 0;
            insertPos++;
        }
    }
};
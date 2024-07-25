class Solution {
    public int missingNumber(int[] nums) {
        int missing = nums.length;
        int i = 0;
        while(i<nums.length){
            int correct = nums[i];
            if(nums[i]<nums.length){
                if(i!= nums[i]){
                    swap(nums,i,nums[i]);
                }
                else{
                    i++;
                }
            }
            else{
                i++;
            }
        }
        for(i =0 ;i<nums.length;i++){
            if(nums[i] != i){
                return i;
            }
        }
        return missing;
    }
    public void swap(int[] nums,int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
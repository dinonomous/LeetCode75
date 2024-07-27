class Solution {
    public int findDuplicate(int[] nums) {
        int i=0;
        while(i<nums.length-1){
            if(nums[i] != i+1){
                int correct = nums[i]-1;
                if(nums[i]!=nums[correct]){
                    swap(nums,i,correct);
                }
                else{ 
                    return nums[i];
                }
            }
            else{
                i++;
            } 
        }
        return nums[i];
    }
    void swap(int[] arr,int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
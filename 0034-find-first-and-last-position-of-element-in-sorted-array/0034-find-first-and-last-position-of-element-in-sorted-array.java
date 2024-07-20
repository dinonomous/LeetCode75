class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};
        int s = find(nums,target,true);
        int e = find(nums,target,false);
        ans[0] = s;
        ans[1] = e;
        return ans;
    }
    public int find(int[] nums , int target , boolean start){
        int s = 0;
        int e = nums.length -1;
        int ans = -1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m]>target){
                e = m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else{
                ans = m;
                if(start){
                    e = m-1;
                }
                else{
                    s = m+1;
                }
            }
        }
        return ans;
    }
}
class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> list = new ArrayList<Integer>();
        int i = 0;
        while (i < nums.length) {
            int correct = nums[i] - 1;
            if (nums[i] != nums[correct]) {
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            } else {
                i++; 
            }
        }
        for(i =0;i<nums.length;i++){
            if(i!=nums[i]-1){
                list.add(nums[i]);
            }
        }
        return list;
    }
}
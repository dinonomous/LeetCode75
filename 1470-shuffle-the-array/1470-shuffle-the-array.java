class Solution {
    public int[] shuffle(int[] nums, int n) {
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i =0;i<nums.length/2;i++){
            arr.add(nums[i]);
            arr.add(nums[n+i]);
        }
        int[] sol = new int[arr.size()];
        for (int i = 0; i < arr.size(); i++) {
            sol[i] = arr.get(i);
        }
        return sol;
    }
}
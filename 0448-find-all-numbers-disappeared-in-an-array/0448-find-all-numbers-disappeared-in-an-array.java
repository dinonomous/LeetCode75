class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        CiclicSort(nums);
        List<Integer> list = new ArrayList<Integer>();
        for(int i =0 ;i<nums.length;i++){
            if(i!= nums[i]-1){
                list.add(i+1);
            }
        }
        return list;
    }
    public void CiclicSort(int[] arr){
        int i =0;
        while(i<arr.length){
            if(arr[i]-1!=i && arr[arr[i]-1]!=arr[i]){
                swap(arr,arr[i]-1,i);
            }
            else{
                i++;
            }
        }
    }
    void swap(int[] arr, int i , int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
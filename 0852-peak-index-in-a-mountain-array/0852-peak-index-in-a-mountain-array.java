class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        return binearySearch(arr);
    }
    public int binearySearch(int[] arr){
        int s,e,m;
        s=0;
        e=arr.length-1;
        while(s<=e){
            m=s+(e-s)/2;
            if(arr[m]<arr[m+1]){
                s=m+1;
            }
            else if(arr[m+1]<arr[m]){
                e=m-1;
            }
            else{
                return m;
            }
        }
        return s;
    }
}
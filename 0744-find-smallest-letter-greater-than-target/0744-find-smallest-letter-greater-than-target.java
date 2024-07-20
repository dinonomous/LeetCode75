class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int s,e,m;
        s=0;e=letters.length-1;
        while(s<=e){
            m = s+(e-s)/2;
            if(letters[letters.length-1]<=target) return letters[0];
            if(letters[m]>target) e=m-1;
            else s=m+1;
            if(s>e) return letters[s];
        }
        return letters[0];
    }
}
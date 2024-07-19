class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for (int i = 0; i < accounts.length; i++) {
            int rs = 0;
            for (int j = 0; j < accounts[i].length; j++) {
                rs += accounts[i][j];
            }
            if (rs > max) {
                max = rs;
            }
        }
        return max;
    }
}

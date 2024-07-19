class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> sol = new ArrayList<>();
        int maxi = 0;
for (int candy : candies) {
    if (candy > maxi) {
        maxi = candy;
    }
}

        for (int candy : candies) {
            sol.add(candy + extraCandies >= maxi);
        }
        return sol;
    }
}
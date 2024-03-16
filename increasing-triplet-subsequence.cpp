using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num; // Update first if num is smaller than or equal to it
            } else if (num <= second) {
                second = num; // Update second if num is smaller than or equal to it
            } else {
                return true; // If we find a number larger than both first and second, return true
            }
        }
        return false; // If we reach here, no increasing triplet was found
    }
};
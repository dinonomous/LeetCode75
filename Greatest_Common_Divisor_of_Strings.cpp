class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return ""; // Not possible if concatenated strings are not equal
        }

        // Find the length of the GCD using Euclidean algorithm
        int gcdLength = gcd(str1.length(), str2.length());

        // Return the prefix of either string with the GCD length
        return str1.substr(0, gcdLength);
    }

private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
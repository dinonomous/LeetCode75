class Solution {
public:
  int compress(vector<char>& chars) {
    int writeIdx = 0; // Index for writing to the input array

    for (int i = 0; i < chars.size(); ++i) {
      int count = 1;
      while (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
        count++;
        i++;
      }

      chars[writeIdx++] = chars[i]; // Write the character

      // Handle counts greater than 9 (split into multiple digits)
      if (count > 9) {
        string countStr = to_string(count);
        for (char digit : countStr) {
          chars[writeIdx++] = digit;
        }
      } else if (count > 1) {
        chars[writeIdx++] = '0' + count; // Write count as a single digit
      }
    }

    return writeIdx; // Return the new length of the compressed array
  }
};

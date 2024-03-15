class Solution {
public:
  string reverseWords(string s) {
    stack<string> words = splitStringUsingStack(s); // Call the function

    string ans = "";
    while (!words.empty()) {
      if (!ans.empty()) {  // Check if ans is not empty (avoids leading space)
        ans += " ";
      }
      ans += words.top();
      words.pop();
    }
    return ans;
  }

private: // Define splitStringUsingStack function outside reverseWords
  stack<string> splitStringUsingStack(const string& str, char delimiter = ' ') {
    stack<string> words;
    string word;

    for (char c : str) {
      if (c == delimiter) {
        if (!word.empty()) {
          words.push(word);
        }
        word.clear();
      } else {
        word += c;
      }
    }

    if (!word.empty()) {
      words.push(word);
    }

    return words;
  }
};

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> a;
        string ans;
        for (char aa : s) {
            if (aa == '*') {
                if (!a.empty())
                    a.pop();
            }
            else {
                a.push(aa);
            }
        }
        ans.resize(a.size());
        auto it = ans.rbegin();
        while (!a.empty()) {
            *it = a.top();
            a.pop();
            ++it;
        }
        return ans;
    }
};

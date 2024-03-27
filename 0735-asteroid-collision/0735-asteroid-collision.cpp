#include <vector>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ast;
        
        for (int a : asteroids) {
            if (ast.empty() || a > 0) {
                ast.push(a);
            } else {
                while (!ast.empty() && ast.top() > 0 && abs(a) > ast.top()) {
                    ast.pop();
                }
                if (ast.empty() || ast.top() < 0) {
                    ast.push(a);
                } else if (ast.top() == abs(a)) {
                    ast.pop();
                }
            }
        }
        
        vector<int> result(ast.size());
        int i = ast.size() - 1;
        while (!ast.empty()) {
            result[i--] = ast.top();
            ast.pop();
        }
        
        return result;
    }
};

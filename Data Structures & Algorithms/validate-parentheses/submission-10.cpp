class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) return false;
        
        stack<char> che;
        for (char c : s) {
            // Push the expected closing bracket directly
            if (c == '(') che.push(')');
            else if (c == '{') che.push('}');
            else if (c == '[') che.push(']');
            else {
                if (che.empty() || che.top() != c) return false;
                che.pop();
            }
        }
        return che.empty();
    }
};

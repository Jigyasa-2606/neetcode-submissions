class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            // If it's a closing bracket
            if (mp.find(c) != mp.end()) {
                if (!st.empty() && st.top() == mp[c]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                // Opening bracket
                st.push(c);
            }
        }

        return st.empty();
    }
};
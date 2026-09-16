class Solution {
public:
    string removeKdigits(string num, int k) {

        string st;

        for(char current : num) {

            while(k > 0 && !st.empty() && st.back() > current) {
                st.pop_back();
                k--;
            }

            st.push_back(current);
        }

        // If removals are still left, remove from the end
        while(k > 0) {
            st.pop_back();
            k--;
        }

        // Find first non-zero digit
        int start = 0;
        while(start < st.size() && st[start] == '0') {
            start++;
        }

        // Everything was zero
        if(start == st.size()) {
            return "0";
        }

        return st.substr(start);
    }
};
class Solution {
public:
    vector<string> ans;

    void solve(string &s, int index, int parts, string curr) {
        if(parts == 4) {
            if(index == s.size()) {
                curr.pop_back(); 
                ans.push_back(curr);
            }
            return;
        }
        for(int len = 1; len <= 3; len++) {

            // Not enough characters left
            if(index + len > s.size())
                break;

            string part = s.substr(index, len);

            // Leading zero is invalid
            if(part.size() > 1 && part[0] == '0')
                continue;

            // Value must be <= 255
            if(stoi(part) > 255)
                continue;

            solve(
                s,
                index + len,
                parts + 1,
                curr + part + "."
            );
        }
    }

    vector<string> restoreIpAddresses(string s) {

        // An IP has 4 parts, each 1-3 digits
        if(s.size() < 4 || s.size() > 12)
            return {};

        solve(s, 0, 0, "");

        return ans;
    }
};
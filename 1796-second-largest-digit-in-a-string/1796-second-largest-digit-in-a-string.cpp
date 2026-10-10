class Solution {
public:
    int secondHighest(string s) {
        int large = -1;
        int second = -1;
        for (char ch : s) {
            if (isdigit(ch)) {
                int digit = ch - '0';

                if (digit > large) {
                    second = large;
                    large = digit;
                } else if (digit < large && digit > second) {
                    second = digit;
                }
            }
        }
        return second;
    }
};
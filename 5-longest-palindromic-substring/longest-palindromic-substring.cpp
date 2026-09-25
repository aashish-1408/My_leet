class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) {
            return "";
        }

        int st = 0;
        int e = 0;

        for (int i = 0; i < s.length(); i++) {
            int odd = expand(s, i, i);
            int even = expand(s, i, i + 1);
            int max_len = max(odd, even);

            if (max_len > e-st) {
                st = i - (max_len - 1) / 2;
                e = i + max_len / 2;
            }
        }

        return s.substr(st, e- st + 1);        
    }

private:
    int expand(string s, int l, int r) {
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            l--;
            r++;
        }
        return r - l - 1;}
};
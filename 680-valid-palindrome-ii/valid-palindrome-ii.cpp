class Solution {
public:
     bool val(string s, int l ,int h) {
        while (l < h) {
            if (s[l] != s[h]) return false;
            l++;
            h--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;

        while (l<r) {
            if (s[l] != s[r]) {
                return val(s, l + 1, r) || val(s, l, r - 1);
            }
            l++;
            r--;
        }

        return true;
    }
};
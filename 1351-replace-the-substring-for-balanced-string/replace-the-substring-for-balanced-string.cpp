class Solution {
public:
    int balancedString(string s) {
        int n = s.length(), k = n / 4, l = 0, res = n;
        vector<int> cnt(128, 0);
        for (char c : s) cnt[c]++;
        
        if (cnt['Q'] <= k && cnt['W'] <= k && cnt['E'] <= k && cnt['R'] <= k) return 0;
        
        for (int r = 0; r < n; r++) {
            cnt[s[r]]--;
            while (cnt['Q'] <= k && cnt['W'] <= k && cnt['E'] <= k && cnt['R'] <= k) {
                res = min(res, r - l + 1);
                cnt[s[l++]]++;
            }
        }
        return res;
    }
};
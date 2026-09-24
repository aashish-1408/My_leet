class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int, int> m;
        int l = 0, mx = 0;

        for (int r = 0; r < f.size(); r++) {
            m[f[r]]++;

            while (m.size() > 2) {
                m[f[l]]--;
                if (m[f[l]] == 0) m.erase(f[l]);
                l++;
            }

            mx = max(mx, r - l + 1);
        }

        return mx;
    }
};
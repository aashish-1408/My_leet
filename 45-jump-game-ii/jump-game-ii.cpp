class Solution {
public:
    int jump(vector<int>& A) {
        int j = 0, e = 0, m = 0;
        for (int i = 0; i < (int)A.size() - 1; i++) {
            m = max(m, i + A[i]);
            if (i == e) {
                j++;
                e = m;
            }
        }
        return j;
    }
};
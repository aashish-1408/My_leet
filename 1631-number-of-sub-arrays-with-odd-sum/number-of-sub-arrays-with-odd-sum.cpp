class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long o = 0, ps = 0;
        for(int a : arr) {
            ps += a;
            o+= ps % 2;
        }
        o += (arr.size() - o) * o;
        return o % 1'000'000'007;
    }
};
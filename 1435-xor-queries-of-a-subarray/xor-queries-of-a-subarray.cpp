class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
       int n = arr.size();
        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; i++) {
            p[i + 1] = p[i] ^ arr[i];
        }
        vector<int> ans;
        for (auto &q : queries) {
            int left = q[0], right = q[1];
            ans.push_back(p[right + 1] ^ p[left]);
        }
        
        return ans;
    }
};
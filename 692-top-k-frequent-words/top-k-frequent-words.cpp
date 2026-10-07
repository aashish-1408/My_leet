class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        int n=words.size();
        for(auto w:words){
            m[w]++;
        }
        vector<vector<string>> b(n + 1);
        for (const auto& [s, f] : m) b[f].push_back(s);

        vector<string> res;
        for (int i = n; i >= 0 && res.size() < k; --i) {
            if (b[i].empty()) continue;
            sort(b[i].begin(), b[i].end());
            int take = min((int)b[i].size(), k - (int)res.size());
            res.insert(res.end(), b[i].begin(), b[i].begin() + take);
        }
        return res;
    }
};
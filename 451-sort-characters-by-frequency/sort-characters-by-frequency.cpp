class Solution {
public:
    string frequencySort(string s) {
    int n = s.size();
    unordered_map<char, int> cnt;
    for (char c : s)  cnt[c] += 1;
        
    vector<vector<char>> fr(n+1);
        for (auto [c, f] : cnt)
            fr[f].push_back(c);
        
    string ans;
    for (int freq = n; freq >= 1; --freq)
        for (char c : fr[freq]) 
          ans.append(freq, c);
 return ans;
    }
};
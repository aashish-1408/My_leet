class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> m;

        for(auto a:strs){
            string k=a;
            sort(k.begin(),k.end());
                m[k].push_back(a);
         }
     vector<vector<string>> ans;
     for(auto &it:m){
         ans.push_back(it.second);
          }
    return ans;
    }
};
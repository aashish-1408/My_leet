class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.length() < 10) return {};
        vector<string> ans;
        unordered_map<string,int> dup;
        for(int i=0;i+10<=s.length();i++){
            string l=s.substr(i,10);
            if(dup.find(l)!=dup.end()&&dup[l]<2){
                ans.push_back(l);
            }
                 dup[l]++;
            
        }
        return ans;
    }
};
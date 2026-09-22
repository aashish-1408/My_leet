class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()<p.length())return{};
int l=0,r=p.length();
vector<int>pf(26,0);
vector<int>sf(26,0);
for(int i=0;i<r;i++){
    pf[p[i]-'a']++;
    sf[s[i]-'a']++;
}
vector<int>ans;
while(r<s.length()){
   if(pf==sf) ans.push_back(l);
   sf[s[l++]-'a']--;
   sf[s[r++]-'a']++;
}
if (pf == sf) ans.push_back(l);
return ans;



    }
};
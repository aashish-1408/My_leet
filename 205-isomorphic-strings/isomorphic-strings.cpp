class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        int n=s.length();

        unordered_map<char, char> mp;
        unordered_map<char, char> mp2;
        for(int i=0;i<n;i++){
           if(mp[s[i]]=='\0'&&mp2[t[i]]=='\0'){
            mp[s[i]]=t[i];
            mp2[t[i]]=s[i];
           }
           else if(mp[s[i]]==t[i]){
            continue;
           }
           else return false;

         }
        return true;


    }
};
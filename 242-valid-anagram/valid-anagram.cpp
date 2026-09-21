class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> al(26,0);
        for(int i=0;i<s.length();i++){
            al[s[i]-'a']++;
            al[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(al[i]) return false;
        }
        return true;
    }
};
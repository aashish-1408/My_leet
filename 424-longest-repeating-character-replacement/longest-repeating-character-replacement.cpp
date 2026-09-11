class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26,0);
        int l=0,r=0,frq=0,len=0; 
        for(r=0;r<s.length();r++){
            f[s[r]-'A']++;
            frq=max(frq,f[s[r]-'A']);
            if((r-l+1)-frq>k){
                f[s[l]-'A']--;
                l++;
            }
            len=max(len,(r-l+1));

        }
        return len;
    }
};
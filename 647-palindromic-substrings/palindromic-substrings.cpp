class Solution {
public:
    int countSubstrings(string s) {
        int l,r;
        int c=0;
        for(int i=0;i<s.length();i++){
            l=r=i;
            while(l>=0&&r<s.length()&&s[l]==s[r]){
                    c++;
                    l--;
                    r++;
            }
            l=i;
            r=i+1;
             while(l>=0&&r<s.length()&&s[l]==s[r]){
                    c++;
                    l--;
                    r++;
        }
    }
        return c;
    }
};
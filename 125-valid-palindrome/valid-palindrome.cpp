class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length();
        for(int i=0;i<r;i++){
            s[i]=tolower(s[i]);
        }
        while(l<=r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
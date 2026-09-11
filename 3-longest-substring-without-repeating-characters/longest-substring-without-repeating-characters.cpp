class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.length();
       int m=0;
       int l=0,r=0;
       unordered_set<char> us;
       for(int r=0;r<n;r++){
        if(us.count(s[r])==0){
            us.insert(s[r]);
        }
        else{
            while(us.count(s[r])){
                us.erase(s[l]);
                l++;
            }
            us.insert(s[r]);
        }
        m=max(m,r-l+1);
       }
       return m;
    }
};
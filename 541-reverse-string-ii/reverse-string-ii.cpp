class Solution {
public:
    string reverseStr(string s, int k) {
     if(s.length()<k){
       reverse(s.begin(),s.end());
     }
     else{
     for(int i=0;i<s.size();i+=2*k){
        int l=i;
        
int r = min(i + k - 1, (int)s.length() - 1);
        while(l<=r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
     }}
     return s;
    }
};
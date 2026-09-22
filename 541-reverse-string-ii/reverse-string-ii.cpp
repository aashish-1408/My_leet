class Solution {
public:
    string reverseStr(string s, int k) {
   for(int r=0; r<s.size();r+=2*k){
      int e = min(r+k,int(s.size()));
      reverse(s.begin()+r,s.begin()+e);
    } 
    return s;
    }
};
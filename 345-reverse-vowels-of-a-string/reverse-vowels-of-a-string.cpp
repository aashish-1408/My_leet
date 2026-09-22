class Solution {
public:

bool isvowel(char ch) {
    
    ch =tolower(ch);
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
    string reverseVowels(string s) {
        int l=0,r=s.length()-1;
        while(l<=r){
            if(!isvowel(s[l]))
                l++;
            
            else if(!isvowel(s[r]))
            r--;
            else{
            swap(s[l],s[r]);
            l++;
            r--;}
        }
        return s;
    }
};
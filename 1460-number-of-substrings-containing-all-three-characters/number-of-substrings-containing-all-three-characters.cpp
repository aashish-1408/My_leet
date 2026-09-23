class Solution {
public:
    int numberOfSubstrings(string s) {\
    int count=0;
    vector<int>lst(3,-1);
    int l=0,r=s.length();
        for(int i=0;i<s.length();i++){
            lst[s[i]-'a']=i;
            if(lst[0]!=-1){
                count+=1+ min(min(lst[0],lst[1]),lst[2]);

            }
        }
        return count;
        
    }
};
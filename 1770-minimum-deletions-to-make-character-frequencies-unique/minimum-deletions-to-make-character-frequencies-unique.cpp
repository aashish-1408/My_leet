class Solution {
public:
    int minDeletions(string s) {
        vector<int> a(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        set<int> mp;
        int del=0;
        for(int f:a){
            while(f>0&&mp.find(f)!=mp.end()){
                    del++;
                    f--;
            }
            if(f>0){
                mp.emplace(f);
            }
        }
        return del;
    }
};
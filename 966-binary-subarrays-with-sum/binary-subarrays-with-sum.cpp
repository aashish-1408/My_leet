class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int s=0,r=0,c=0;
        for(auto n:nums){
            s+=n;
            r=s-k;
            if(mp.find(r)!=mp.end()){
                c+=mp[r];
            }
            mp[s]++;

        }
        return c;
    }
};
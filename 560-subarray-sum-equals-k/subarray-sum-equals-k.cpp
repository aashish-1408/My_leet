class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ps(n,0);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=nums[i]+ps[i-1];
        }
        unordered_map<int,int> m;
        int a=0;
        for(int i=0;i<n;i++){
            if(ps[i]==k){
                a++;
            }
            if(m.find(ps[i]-k)!=m.end()){
                a+=m[ps[i]-k];
            }
            m[ps[i]]++;
        }
        return a;
    }
};
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0,pd=1,c=0;
        for(int i=0;i<nums.size();i++){
            pd*=nums[i];
            while(l <= i && pd >= k){
                pd/=nums[l];
                l++;
            }
            c+=i-l+1;
        }
        return c;
    }
};
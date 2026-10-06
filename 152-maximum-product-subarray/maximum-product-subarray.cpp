class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mi=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)swap(maxi,mi);
            maxi=max(nums[i],maxi*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            ans=max(maxi,ans);
        }
        return ans;
    }
};
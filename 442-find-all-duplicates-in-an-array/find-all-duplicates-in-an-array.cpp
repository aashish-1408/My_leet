class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int ci=nums[i]-1;
            if(nums[ci]!=nums[i]){
                swap(nums[i],nums[ci]);
            }
            else{
                i++;
            }
        }
    
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(i!=nums[i]-1){
            ans.push_back(nums[i]);
        }
    }
    return ans;
    }
};
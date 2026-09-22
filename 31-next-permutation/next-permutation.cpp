class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       /* int n=nums.size();
        if(n==1)
        return;
        int peak=-1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                peak=i;
            }
        }
        if(peak==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int min=peak-1;
        for(int i=peak;i<n;i++){
            if(nums[i]>nums[peak-1]){
                peak=i;
            }
        }
        swap(nums[min],nums[peak]);
        sort(nums.begin()+peak,nums.end());*/
        next_permutation(nums.begin(),nums.end());
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
                c=i;
                break;
            }
            else
            c=i+1;
        }
        return c;
    }
};
class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0) return nums;
       int  w = 2 * k + 1;
       vector<int>res(n,-1);
        if (n < w) return res;
        long long s = 0;
        for (int i = 0; i < w; i++) s += nums[i];
        res[k] = s / w;
        
        for (int i = k + 1; i < n - k; i++) {
            s += nums[i + k] - nums[i - k - 1];
            res[i] = s / w;
        }
        
        return res;
    }
};
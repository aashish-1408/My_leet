class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i=0;
        while(i<nums1.size()){
            int ix =find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            bool t=true;
            for(int j=ix;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    t=false;
                    break;
                }
            }
            if(t){
                ans.push_back(-1);
            }
            i++;
        }
        return ans;
    }
};
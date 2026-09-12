class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
       ans.push_back(intervals[0]);
       int st = intervals[0][0];
       int end=intervals[0][1];
       for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=end){
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            end = max(end, intervals[i][1]);        }
        else{
            ans.push_back(intervals[i]);
            end=intervals[i][1];
        }
       }
       return ans;
    }
};
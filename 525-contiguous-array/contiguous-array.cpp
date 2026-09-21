class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
       unordered_map<int,int> m;
       unsigned int l = 0;
       
        for(int i=0;i<nums.size();i++){
           sum += (nums[i]==0)?-1:1;
           
           auto it = m.find(sum);
           
           if(sum == 0){
              if(l < i+1)
               l= i+1;
           }
           else if(it != m.end()){
              if(l < i-it->second)
               l= i-it->second;
           }
           else if(it == m.end())
                m.insert({sum,i});
       }
        return l;
    }
};
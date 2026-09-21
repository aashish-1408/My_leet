class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0,r=k,c=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
            if(sum/k>=threshold)c++;

        while(r<arr.size()){
            sum-=arr[l];
            sum+=arr[r];
            if(sum/k>=threshold)c++;

            r++;l++;
             }
             return c;
    }
};
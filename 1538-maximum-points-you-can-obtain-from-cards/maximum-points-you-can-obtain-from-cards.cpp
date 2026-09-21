class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int c = 0;
        
        for (int i = 0; i < k; i++) {
            c += cardPoints[i];
        }
        
        int m = c;
        
        int l = k - 1;
        int r = n - 1;
        
        while (l >= 0) {
            c -= cardPoints[l];
            c += cardPoints[r];
            
            m = max(m,c);
            
            l--;
            r--;
        }
        
        return m;
    }
};
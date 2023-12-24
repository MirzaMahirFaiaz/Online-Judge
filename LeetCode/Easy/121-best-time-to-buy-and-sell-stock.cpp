class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mn = 99999;
       int ans =0;
       for(int i=0;i<prices.size();i++){
            mn = min(mn, prices[i]);
            ans = max (ans, prices[i]-mn);
       }
       
        return ans;  
    }
};

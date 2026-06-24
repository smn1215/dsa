class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1,maxP=0,profit=0;
        while (r< prices.size()){
            if (prices[l]<prices[r]){
                profit = prices[r]-prices[l];
                if (maxP<profit){
                    maxP=profit;
                }
            }
            else{
                l=r;
            }
            r+=1;
        }
        return maxP;
    }
};
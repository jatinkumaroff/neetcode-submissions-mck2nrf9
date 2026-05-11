class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
        int lowestPrice=prices[0];
        for(int x:prices){
            maxi=max(maxi,x-lowestPrice);
            lowestPrice=min(lowestPrice,x);
        }
        return max(0,maxi);
    }
};

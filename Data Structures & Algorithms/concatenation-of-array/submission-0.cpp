class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s=nums.size()*2;
        int n=nums.size();
        vector<int> ans(s);
        for(int i=0;i<n;i++){
            ans[i]=nums[i];
            ans[n+i]=nums[i];
        }
        return ans;
    }
};
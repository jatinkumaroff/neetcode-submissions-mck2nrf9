class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int n:nums){
            if(mpp[n])return true;
            mpp[n]++;
        }
        return false;
    }
};
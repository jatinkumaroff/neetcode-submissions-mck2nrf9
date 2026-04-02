class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        int size=nums.size();
        for(int n=0;n<size;n++){
            if(mpp.count(target-nums[n])){
            return {mpp[target-nums[n]],n};
            } 
            mpp[nums[n]]=n;
        }
        
        return {-1,-1};
    } 
};

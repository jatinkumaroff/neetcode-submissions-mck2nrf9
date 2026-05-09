class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int win=0;
        unordered_map<int,int> mpp;
        // while(win<k){
        //     if(mpp.contains(nums[win])) return true;
        //     mpp[nums[win]]++;
        //     win++;
        // }
        int n=nums.size();
        while(win<n){
            if(mpp.contains(nums[win])) return true;
            if(win>=k){
                mpp.erase(nums[win-k]);
                }
            
            mpp[nums[win]]++;
            win++;
        }
        return false;
    }
};
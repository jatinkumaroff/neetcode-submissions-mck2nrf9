class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=nums[0];
        int cnt=1;
        int size=nums.size();
        for(int x:nums){
            if(element==x){
                cnt++;
            }else{
                cnt--;
                if(cnt==0){
                    element=x;
                    cnt=1;
                }
            }
        }
        return element;
    }
};
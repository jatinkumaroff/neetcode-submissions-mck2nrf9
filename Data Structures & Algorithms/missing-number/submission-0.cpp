class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int num=0;
        for(int i=1;i<=nums.size();i++){
            num=num ^ i;
        }
        for(int x:nums){
            num=num ^x;
        }
        return num;
    }
};

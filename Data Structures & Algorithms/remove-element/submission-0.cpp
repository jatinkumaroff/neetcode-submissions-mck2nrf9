class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nv=0; //non val
        int v=0;  // val
        int size=nums.size();
        //find first occurance of val
        while(v<size){
            if(nums[v]==val) break;
            v++;
        }
        //now start nonval after it
        nv=v+1;
        while(nv<size){
            if(nums[nv]!=val){
                swap(nums[nv],nums[v]);
                v++;
            }
            
            nv++;
        }
        return v;

    }
};
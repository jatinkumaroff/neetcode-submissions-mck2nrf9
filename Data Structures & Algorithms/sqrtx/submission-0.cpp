class Solution {
public:
    int mySqrt(int x) {
       int low=1;
       int high=x;
       while(low<=high){
        int mid= (high-low)/2 + low;
        if(x/mid==mid && x%mid==0) return mid;
        if(x/mid<mid){
            high=mid-1;
        }else{
            low=mid+1;
        }
       } 
       return high;
    }
};
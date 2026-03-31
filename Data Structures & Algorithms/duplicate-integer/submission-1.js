class Solution {
    hasDuplicate(nums) {
        let mpp = new Map();
        for (let n of nums){
            if(mpp.has(n)) return true;
            mpp.set(n,1);
        }
        return false;
    }
}

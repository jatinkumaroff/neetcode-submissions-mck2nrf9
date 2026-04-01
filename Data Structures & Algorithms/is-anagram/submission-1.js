class Solution {
    isAnagram(s, t) {
        let sizes=s.length;
        let sizet=t.length;
        let freq= new Array(26).fill(0);
        if(sizes!=sizet) return false;  
        for(let i=0;i<sizes;i++){
            freq[s.charCodeAt(i)-97]++;
            freq[t.charCodeAt(i)-97]--;
        }
        for(let n of freq){
        if(n!=0) return false;
    }
    return true;
    }
    
}
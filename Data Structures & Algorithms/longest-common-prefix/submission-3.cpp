class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre=strs[0];
        for(int i=1;i<strs.size();i++){
        
            string curr=strs[i];
            if(curr=="") return "";
            string check="";
            int j=0;
            while(j<pre.size() && j<curr.size()){
                if(pre[j]!=curr[j]){
                    pre=check;
                    break;
                }
                check+=pre[j];
                j++;
            }
            pre=check;
           
        }
         return pre;
    }
};
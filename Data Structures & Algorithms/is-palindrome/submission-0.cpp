class Solution {
public:
bool isAlphaNum(char ch){
    if(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z') || ('0'<=ch && ch<='9')) return true;
    return false;
}
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(!isAlphaNum(s[l])){
                l++;
                continue;                
            }else if(!isAlphaNum(s[r])){
                r--;
                continue;                
            }
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;
            r--;
        }
 return true;   }
};

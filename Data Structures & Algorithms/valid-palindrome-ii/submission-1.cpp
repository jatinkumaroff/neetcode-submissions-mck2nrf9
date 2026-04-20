class Solution {
public:
bool check(string &s,int &i,int &j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        if(check(s,i,j)) return true;
        int ni=i+1;
        int nj=j-1;
        if(check(s,ni,j) || check(s,i,nj)) return true;
    return false;
    }
};
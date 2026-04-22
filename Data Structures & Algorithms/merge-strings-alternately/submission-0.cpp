class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int n1=word1.size();
        int n2=word2.size();
        string res="";
        while(i<n1 && j<n2){
            res+=word1[i];
            i++;
            res+=word2[j];
            j++;
        }
        while(i<n1 ){
            res+=word1[i];
            i++;
            
        }
        while( j<n2){
           
            res+=word2[j];
            j++;
        }
        return res;
        
    }
};
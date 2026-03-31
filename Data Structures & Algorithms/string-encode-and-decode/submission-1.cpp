class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        int noOfStrings=strs.size();
        encoded=to_string(noOfStrings)+"#";
        for(string s:strs){
            encoded+=to_string(s.size())+",";
        }
        for(string s:strs){
            encoded+=s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i=0;
        string noOfStrings="";
        while(s[i]!='#'){
            noOfStrings+=s[i];
            i++;
        }
        i++;
        int n=stoi(noOfStrings);
        vector<int> lenOfStrings;
        int wordsLeft=n;
        string len="";
        while(wordsLeft){
            if(s[i]==','){
                lenOfStrings.push_back(stoi(len));
                len="";
                wordsLeft--;
                i++;
            }else{
                len+=s[i];
                i++;
            }
        }
        vector<string> ans;
        string answer="";
        for(int j=0;j<n;j++){
            for(int k=0;k<lenOfStrings[j];k++){
                answer+=s[i+k];
            }
            i=i+lenOfStrings[j];
            ans.push_back(answer);
            answer="";
        }


        return ans;
    }
};

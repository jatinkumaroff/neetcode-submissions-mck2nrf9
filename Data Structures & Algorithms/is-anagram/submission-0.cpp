class Solution {
public:
    bool isAnagram(string s, string t) {
        int sizes=s.size();
        int sizet=t.size();
        if(sizes!=sizet) return false;
        vector<int> freq(26,0);
        for(int i=0;i<sizes;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int n:freq){
            if(n!=0) return false;
        }

        return true;
    }
};

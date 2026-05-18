class Solution {
   public:
   string getSorted(string s){
    sort(s.begin(),s.end());
    return s;
   }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int cnt = 0;
        vector<vector<string>> result;
        unordered_map<string, int> mpp;
        
                
        for (int i = 0; i < strs.size(); i++) {
            string sorted = getSorted(strs[i]);
            if (!mpp.count(sorted)) {
                mpp[sorted] = cnt;
                cnt++;
                result.push_back({strs[i]});
            }else{
                result[mpp[sorted]].push_back(strs[i]);
            }
        }
        return result;
    }
};
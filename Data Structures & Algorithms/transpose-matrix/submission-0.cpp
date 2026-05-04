class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
            result.push_back({});
            for(int j=0;j<m;j++){
                result[i].push_back(matrix[j][i]);
            }
        }
        return result;
    }
};
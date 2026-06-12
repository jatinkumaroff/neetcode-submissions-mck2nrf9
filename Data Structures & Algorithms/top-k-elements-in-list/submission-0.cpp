class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int,int> mpp;
        for(int x:nums)  mpp[x]++;
        for(auto it:mpp){
            int x=it.second;
            if(minHeap.size()==k){
                minHeap.push(x);
                minHeap.pop();
            }else{
                minHeap.push(x);
            }
        }
        vector<int> result;
        for(auto it:mpp){
            if(it.second>=minHeap.top()){
                result.push_back(it.first);
            }
        }
        return result;

    }
};

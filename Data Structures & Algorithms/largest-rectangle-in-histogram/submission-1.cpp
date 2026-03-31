class Solution {
public:
    vector<int> nextSmallerLeft(vector<int>& nums){
        stack<int>st;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans.push_back(-1);
                st.push(i);
            }else if(nums[st.top()]<nums[i]){
                ans.push_back(st.top());
                st.push(i);
            }else{
                while(st.size()>0 && nums[st.top()]>=nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(-1);
                    st.push(i);
                }else{
                    ans.push_back(st.top());
                    st.push(i);
                }
            }
        }
        return ans;
    }
    vector<int> nextSmallerRight(vector<int>& nums){
        stack<int>st;
        vector<int> ans;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(n);
                st.push(i);
            }else if(nums[st.top()]<nums[i]){
                ans.push_back(st.top());
                st.push(i);
            }else{
                while(st.size()>0 && nums[st.top()]>=nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(n);
                    st.push(i);
                }else{
                    ans.push_back(st.top());
                    st.push(i);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int maxArea=INT_MIN;
        vector<int> right=nextSmallerRight(heights);
        vector<int> left=nextSmallerLeft(heights);
        int n=heights.size();
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            maxArea=max((width*heights[i]),maxArea);
        }

        return maxArea;
    }
};

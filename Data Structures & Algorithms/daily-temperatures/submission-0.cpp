class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         stack <int> st;
        vector<int> result;
        for(int i=temperatures.size()-1;i>=0;i--){
            if(st.size()==0){
                result.push_back(0);
                st.push(i);
            }else if(temperatures[st.top()]>temperatures[i]){
                //YES, warmer day
                result.push_back(st.top()-i);
                st.push(i);
            }else{
                while(st.size()>0 && temperatures[st.top()]<=temperatures[i]){
                    st.pop();
                }
                if(st.size()==0){
                    result.push_back(0);
                st.push(i);
                }else{
                    result.push_back(st.top()-i);
                st.push(i);
                }
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string s:operations){
            if(s=="D"){
                st.push(2*st.top());
            }else if(s=="C"){
                st.pop();
            }else if(s=="+"){
                int last=st.top();
                st.pop();
                int neww=st.top()+last;
                st.push(last);
                st.push(neww);
            }else{
                st.push(stoi(s));
            }
        }
        int res=0;
        while(st.size()>0){
            res+=st.top();
            st.pop();
        }
        return res;
    }
};
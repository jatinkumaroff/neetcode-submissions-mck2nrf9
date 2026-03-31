class Solution {
public:
bool open(char a){
    if(a=='(' || a=='{' || a=='[') return true;
    return false;
}
bool match(char a,char b){
    if((a=='(' && b==')')|| (a=='{' && b=='}') || (a=='[' && b==']')) return true;
    return false;
}
    bool isValid(string s) {
       stack<char> st;
       for(char ch:s){
        if(open(ch)){
            st.push(ch);
        }else{
            if(st.size()==0)return false;
            if(match(st.top(),ch)){
                st.pop();
            }else{
                return false;
            }
        }
       } 

       return st.size()==0;
    }
};

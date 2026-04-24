class Solution {
public:
bool isOpen(char ch){
    if(ch=='(' || ch=='{' || ch=='[') return true;
    return false;
}
bool isClosed(char ch){
    if(isOpen(ch)) return false;
    return true;
}
bool isMatched(char ch1,char ch2){
    if(ch1=='(' && ch2==')') return true;
    if(ch1=='[' && ch2==']') return true;
    if(ch1=='{' && ch2=='}') return true;
    return false;
}
    bool isValid(string s) {
        stack<char> st;
        for(char ch:s){
            if(isOpen(ch)){
                st.push(ch);
            }else{
                if(st.empty()) return false;
                if(!isMatched(st.top(),ch)) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

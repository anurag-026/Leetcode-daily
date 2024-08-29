class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stack<string> st;
        string temp="",ans="";
        for(int i=0; i<n; i++){
            if(s[i] == ' '){
                 
                if(temp.empty()){
                    while( i!=n-1  && s[i+1]==' ')i++;
                }
                else{
                    st.push(temp);
                    temp="";
                }

            }
            else {
                temp+=s[i];
            }
        }
        if(!temp.empty()){
            st.push(temp);
        }
        int i=st.size()-1;
        while(i--){
            ans = ans+ st.top()+" ";
            st.pop();
        }
        ans= ans+st.top();
        st.pop();
        return ans;

    }
};
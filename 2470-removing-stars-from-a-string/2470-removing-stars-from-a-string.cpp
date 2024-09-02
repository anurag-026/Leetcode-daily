class Solution {
public:
    string removeStars(string s) 
    {
        stack<char>st;
        int n = s.length();
        int i = 0;
        if(n == 1)
        {
            return s;
        }
        for(i = 0 ; i < n-1 ; )
        {
            if(s[i] != '*' && s[i+1] != '*')
            {
                st.push(s[i]);
                i++;                    
            }
            else if(s[i] != '*' && s[i+1] == '*')
            {
                i = i+2;
            }
            else if(s[i] == '*')
            {
                st.pop();
                i++;
            }
        }    
        if(st.size() == 0)
        {
            return "";
        }
        if(i < n)
        {
            if(s[n-1] != '*')
            {
                st.push(s[n-1]);
            }
            else 
            {
                st.pop();
            }
        }
        string ans = "";
        int size = st.size();
        for(int i = 0 ; i < size ; i++)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
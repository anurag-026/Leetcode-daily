class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n =nums2.size();
        stack<int> st;
        unordered_map<int,int>mpp;
        

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top() <nums2[i] ){
                st.pop();
            }
            if( st.empty() ){
                mpp[nums2[i]] =-1;
            }
            else if( !st.empty() && st.top() > nums2[i] ){
                 mpp[nums2[i]]  = st.top();
                 
            }
            else if(   st.top() <nums2[i]){
               
                if(st.empty()){
                    mpp[nums2[i]]  =-1;
                }
                if(!st.empty() &&  st.top() > nums2[i] ){
                     mpp[nums2[i]] = st.top();
                }
            }
            st.push(nums2[i]);
        }
        vector<int> ans ;
        
        for(int x:nums1){
            ans.push_back(mpp[x]);
        }
        return ans;
    }
};
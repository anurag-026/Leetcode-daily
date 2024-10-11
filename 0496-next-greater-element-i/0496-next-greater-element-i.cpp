class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n =nums2.size();
        stack<int> st;

        vector<int> arr(n);

        for(int i=n-1; i>=0; i--){
            if( st.empty() ){
                arr[i]=-1;
            }
            else if( !st.empty() && st.top() > nums2[i] ){
                arr[i] = st.top();
                 
            }
            else if(   st.top() <nums2[i]){
                while(!st.empty() && st.top() <nums2[i] ){
                    st.pop();
                }
                if(st.empty()){
                    arr[i]=-1;
                }
                if(!st.empty() &&  st.top() > nums2[i] ){
                    arr[i] = st.top();
                }
            }
            st.push(nums2[i]);
        }
        vector<int> ans(nums1.size());
        for(int i=0; i<nums1.size(); i++ ){
            for(int j=0; j<nums2.size() ; j++ ){
                if(nums1[i] == nums2[j] ){
                    ans[i] =  arr[j];
                }
            }
        }
        return ans;

    }
};
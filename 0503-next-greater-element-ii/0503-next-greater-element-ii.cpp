class Solution {
public:
    // vector<int> nextGreaterElements(vector<int>& nums) {
        // int n= nums.size();
        // vector<int> nums2 ;
        // for(int i=0; i<n; i++){
        //     nums2.push_back(nums[i]) ;
        // }
        // for(int i=0; i<n; i++){
        //     nums2.push_back(nums[i]) ;
        // }

        // n=2*n;
        // stack<int> st;
        // vector<int> ans(n);

        // for(int i=n-1; i>=0; i--){
        //     while(!st.empty() && st.top() <= nums2[i] ){
        //         st.pop();
        //     }
        //     if( st.empty() ){
        //           ans[i] = -1;
        //     }
        //     else if( !st.empty() && st.top() > nums2[i] ){
        //         ans[i] = st.top();
        //     }
        //     st.push(nums2[i]);
        // }
        // ans.erase(ans.begin()+n/2, ans.end() );
        // return ans;
    // }

    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for( int i= 2*n-1; i>=0; i--){
            int curr = nums[i%n];
            while(!st.empty() && st.top() <= curr ){
                st.pop();
            }
             
            if(!st.empty()) 
                ans[i%n] = st.top();
            
            st.push(curr);
        }
        return ans;
    }
};
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n =  height.size();
//         vector<int> lmax(n,0);
//          vector<int> rmax(n,0);
//         stack<int> st;

//         for(int i=0; i<n; i++){
//             while(!st.empty() && height[i] >= st.top()){
//                 st.pop();
//             }
            
//             if(!st.empty()){
//                 lmax[i] = st.top();
//             }
//             if(!st.empty()  && height[i] >st.top() ) 
//                 st.push(height[i]);
//         }
//         for(int i=n-1; i>=0; i--){
//             while(!st.empty() && height[i] >= st.top()){
//                 st.pop();
//             }
//             if(!st.empty()){
//                rmax[i] = st.top();
//             }
//             if( !st.empty() && height[i] >st.top() ) 
//                 st.push(height[i]);
//         }

//         int ans = 0;
//         for(int j =0; j<n; j++){
//             int m = min(rmax[j] , lmax[j] ); 
//                 ans = ans+ m - height[j];
             
//         }
//         return ans;

//     }
// };


class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int leftMax = height[left];
        int rightMax = height[right];
        int water = 0;

        while (left < right) {
            if (leftMax < rightMax) {
                left++;
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
            } else {
                right--;
                rightMax = max(rightMax, height[right]);
                water += rightMax - height[right];
            }
        }

        return water;        
    }
};
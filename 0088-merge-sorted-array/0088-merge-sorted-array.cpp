class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = nums1.size()-1, i=nums1.size()-n-1, j=n-1;

        while(i>=0 && j>=0){
            if(nums1[i] >nums2[j]){
                nums1[x]=nums1[i];
                nums1[i]=0;
                i--;
            }else{
                nums1[x]=nums2[j];
                nums2[j]=0;
                j--;
            }
            x--;
        }
        while(j>=0){
            nums1[x--] = nums2[j--];
        }

    }

    // TC= m * nlogn
    void merge1(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                swap(nums1[i], nums2[j]);
            }
            i++;
            sort(nums2.begin(), nums2.end());
        }
        while (j < n) {
            nums1[i++] = nums2[j++];
        }
    }
};
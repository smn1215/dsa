class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Pointers for the end of valid elements in nums1 and nums2
        int i = m - 1;
        int j = n - 1;
        // Pointer for the last available slot in the entire nums1 array
        int k = m + n - 1;
        
        // Merge from right to left
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        
        // If there are remaining elements in nums2, copy them over.
        // (If there are remaining elements in nums1, they are already in place!)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
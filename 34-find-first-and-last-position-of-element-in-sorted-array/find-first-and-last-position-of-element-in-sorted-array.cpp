class Solution {
public:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                ans = mid;
                if (isFirst) {
                    high = mid - 1; // Look left for first position
                } else {
                    low = mid + 1;  // Look right for last position
                }
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        if (first == -1) return {-1, -1}; // Optimization
        int last = findBound(nums, target, false);
        
        return {first, last};
    }
};

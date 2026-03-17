class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Map to store the last seen index of each character
        vector<int> mpp(256, -1); 

        int left = 0, right = 0;
        int n = s.size();
        int len = 0;

        while (right < n) {
            // If character was seen before, move left pointer to the right of that index
            if (mpp[s[right]] != -1) {
                left = max(mpp[s[right]] + 1, left);
            }

            // Update last seen index
            mpp[s[right]] = right;

            // Calculate max length
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};
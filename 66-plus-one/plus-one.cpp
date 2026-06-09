class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from right to left
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // Done, return immediately
            }
            // If digit is 9, it becomes 0 and carry remains for next iteration
            digits[i] = 0;
        }
        
        // If we reach here, it means the number was something like [9, 9]
        // We need to add a 1 at the front
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
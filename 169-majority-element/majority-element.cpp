#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        
        for (int num : nums) {
            // If count is zero, we pick a new candidate
            if (count == 0) {
                candidate = num;
            }
            
            // Increment if it matches the candidate, decrement otherwise
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;
    }
};
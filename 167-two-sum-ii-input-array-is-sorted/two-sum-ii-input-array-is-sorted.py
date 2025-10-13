class Solution:
    def twoSum(self, numbers, target):
        left, right = 0, len(numbers) - 1  # two pointers
        
        while left < right:
            curr_sum = numbers[left] + numbers[right]
            
            if curr_sum == target:
                # Return 1-indexed positions
                return [left + 1, right + 1]
            elif curr_sum < target:
                left += 1   # need a larger sum
            else:
                right -= 1  # need a smaller sum

        
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        current_count, max_count = 0, 0

        for i in nums:
            current_count += 1

            if (i == 0):
                current_count = 0
            max_count = max(max_count, current_count)
        
        return max_count
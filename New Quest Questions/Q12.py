class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        
        sum_total, sum = 0, 0
        for i in range(1, len(nums)+1): sum_total += i
        for i in nums: sum += i

        dup = -1
        dic = {}

        for i in nums:
            if i not in dic:
                dic[i] = []
            else:
                dup = i
                break
            dic[i] = i
        
        return [dup, sum_total - (sum - dup)]
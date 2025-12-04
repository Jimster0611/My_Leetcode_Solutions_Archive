class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        return_list = []
        num_set = set(nums)
        for i in range(1, len(nums)+1):
            if i not in num_set:
                return_list.append(i)

        return return_list
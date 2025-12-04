class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        shuffled_list = []

        for i in range(int(len(nums)/2)):
            shuffled_list.extend([nums[i], nums[i + len(nums)//2]])

        return shuffled_list
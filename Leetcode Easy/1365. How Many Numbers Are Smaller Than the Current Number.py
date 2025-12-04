class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        """
        double for loop
        go through each element except itself comparing if its greater
        keep track, at end of loop append answer to a return list
        """
        greaters = []

        for i in range(len(nums)):
            temp_counter = 0
            for j in range(len(nums)):
                if i == j:
                    continue
                if nums[i] > nums[j]:
                    temp_counter += 1
            greaters.append(temp_counter)
        
        return greaters

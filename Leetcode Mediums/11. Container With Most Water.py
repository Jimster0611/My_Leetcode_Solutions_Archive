class Solution:
    def maxArea(self, height: List[int]) -> int:
        """
        2 pointer double for loop
        area max would be the min of both numbers 
        """

        largest_area = -1
        i, j = 0, len(height)-1

        while (i < j):
            area = min(height[i], height[j]) * abs(i-j)
            largest_area = max(largest_area, area)

            if height[i] < height[j]:
                i += 1
            elif height[i] >= height[j]:
                j -= 1

        return largest_area
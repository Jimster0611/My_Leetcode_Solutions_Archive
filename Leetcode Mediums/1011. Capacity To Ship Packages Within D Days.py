class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        """
        binary search from 1 to the highest number in weights

        another function to check whether it is possible

        i.e, 2 parts to the code, a binary search that gives us potential numbers
            we grab said potential numbers and see if they would actually work
        """
        
        def possible(number : int) -> bool:
            """
            have a list of booleans, t/f

            """
            capacity = 0
            dayss = 1

            for weight in weights:
                if capacity + weight > number:
                    dayss += 1
                    capacity = 0
                capacity += weight
            return dayss <= days

        i, j = max(weights), sum(weights)
        min_capacity = 9999999999999999

        while i <= j:
            middle = (i+j) // 2

            if possible(middle):
                j = middle - 1
                min_capacity = middle
            else:
                i = middle + 1
    
        return min_capacity
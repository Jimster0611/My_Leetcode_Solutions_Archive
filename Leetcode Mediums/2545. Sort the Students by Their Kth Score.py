class Solution:
    def sortTheStudents(self, score: List[List[int]], k: int) -> List[List[int]]:
        """
        use selection sort buyt on the biggest element
        in the kth positon
        """

        for i in range(len(score)):  # goes through the big i arrays
            biggest_pair = [-1, -1]  # 0 - value, 1 gives index positon
            for j in range(i, len(score)):
                if score[j][k] > biggest_pair[0]:
                    biggest_pair = [score[j][k], j]
            
            if biggest_pair[0] != -1:
                score[biggest_pair[1]], score[i] = score[i], score[biggest_pair[1]] 
        
        return score
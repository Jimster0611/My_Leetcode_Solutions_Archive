class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        """
        python list can function here as a stack
            append to the back, push to the top of back
        """
        return_list = []
        for i in range(1, target[-1] + 1):
            return_list.append("Push")
            if i not in target:
                return_list.append("Pop")
        

        return return_list
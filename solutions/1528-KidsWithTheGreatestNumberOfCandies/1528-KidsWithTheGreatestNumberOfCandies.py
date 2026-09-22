# Last updated: 9/23/2026, 12:21:07 AM
class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        maxCandy = max(candies)
        isMax = []
        for candy in candies:
            if candy + extraCandies >= maxCandy:
                isMax.append(True)
            else:
                isMax.append(False)
        return isMax
        
                
        
        
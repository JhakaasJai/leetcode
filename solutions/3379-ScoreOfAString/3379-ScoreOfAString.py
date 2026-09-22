# Last updated: 9/23/2026, 12:21:11 AM
import math
class Solution(object):
    def scoreOfString(self, s):
        """
        :type s: str
        :rtype: int
        """
        import math
        count = 0
        for i in range(len(s)-1):
            diff = abs(ord(s[i]) - ord(s[i+1]))
            count = diff + count
        return count
        
# Last updated: 9/23/2026, 12:21:15 AM
class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        n1 = len(str1)
        n2 = len(str2)
        
        if n1 > n2:
            for i in range((n2),0, -1):
                cmpStr = str2[:i]
                print(cmpStr)
                x = n1 / (i)
                print(x)
                if cmpStr * x == str1 and n1 % (i) == 0:
                    y = n2 / i
                    if cmpStr * y == str2 and n2 % i == 0:
                        return cmpStr
                    else:
                        continue
                else:
                    continue
            return ""
        else:
            for i in range((n1), 0, -1):
                cmpStr = str1[:i]
                x = n2 / (i)
                if cmpStr * x == str2 and n2 % (i) == 0:
                    y = n1 / i
                    if cmpStr * y == str1 and n1 % i == 0:
                        return cmpStr
                    else:
                        continue
                else:
                    continue
            return ""
                
                
                
        
        
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        for x in range(len(s)//2):
            s = s.replace('()', '').replace('{}', '').replace('[]', '')
        return len(s) == 0
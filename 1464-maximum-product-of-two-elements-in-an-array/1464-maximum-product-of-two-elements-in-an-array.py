class Solution(object):
    def maxProduct(self, nums):
        a=0
        b=0
        for i in nums:
            if i>a:
                b=a
                a=i
            elif i>b:
                b=i
        return (a-1)*(b-1)
        """
        :type nums: List[int]
        :rtype: int
        """
        
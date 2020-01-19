class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        h = {}
        for i in range(len(nums)):
            if nums[i] in h:
                h[nums[i]] += 1
            else:
                h[nums[i]] = 1

        return max(h, key=h.get)


s = Solution()
print(s.majorityElement([3,3,4]))

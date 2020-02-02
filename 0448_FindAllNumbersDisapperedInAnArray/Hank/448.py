class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        length = len(nums)
        nums = set(nums)
        lost = []
        for i in range(1, length + 1):
            if i not in nums:
                lost.append(i)
        return lost

class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        for i in range(len(nums)):
            index = abs(nums[i]) - 1
            nums[index] = -1 * abs(nums[index])
        return [i+1 for i in range(len(nums)) if nums[i] > 0]
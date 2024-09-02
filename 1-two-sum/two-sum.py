class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        countN = {} 
        for i in range(len(nums)):
            T = target - nums[i]
            if T in countN:
                return [countN[T],i]
            countN[nums[i]] = i 
        return []
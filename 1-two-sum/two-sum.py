class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_indices = {}  # Dictionary to store number and its index

        # Iterate over the list and check for the complement
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_indices:
                return [num_indices[complement], i]  # Return the indices
            num_indices[num] = i  # Store the current number and its index

        return []  # Return empty if no solution is found (though the problem guarantees a solution)

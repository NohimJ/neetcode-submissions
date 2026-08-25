class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        comp = {}

        for i, v in enumerate(nums):
            diff = target - v
            if diff in comp:
                return [comp[diff], i]
            comp[v] = i
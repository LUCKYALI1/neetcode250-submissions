class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen_map = {}
        for index, num in enumerate(nums):
            complement = target - num
            if complement in seen_map:
                return [seen_map[complement], index]
            seen_map[num] = index
        return []
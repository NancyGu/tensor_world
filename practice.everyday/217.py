# https://leetcode.cn/problems/contains-duplicate/?plan=data-structures&plan_progress=ze7awqg
# easy
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) != len(nums)
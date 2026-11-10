class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        temp = set()
        for num in nums:
            if not num in temp:
                temp.add(num)
            else:
                return True
        return False
        
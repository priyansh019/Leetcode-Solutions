class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        #return nums+nums (short version)
        n = len(nums)
        x = 2 * n
        ans = [0] * x

        for i in range(n):
            ans[i] = nums[i]

        for i in range(n, x):
            ans[i] = nums[i - n]

        return ans
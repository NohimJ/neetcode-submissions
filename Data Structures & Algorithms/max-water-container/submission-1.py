class Solution:
    def maxArea(self, heights: List[int]) -> int:
        maxNum = 0
        left = 0
        right = len(heights) - 1
        for i in range (len(heights)):
            maxNum = max(maxNum, (right-left) * min(heights[left], heights[right]))

            if (heights[left] < heights[right]):
                left += 1
            else:
                right -= 1
        return maxNum




        
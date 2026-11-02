class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = 0
        sell = 1
        maxProf = 0

        while sell < len(prices):
            if prices[buy] < prices[sell]:
                Prof = prices[sell] - prices[buy]
                maxProf = max(maxProf, Prof)
            else:
                buy = sell
            sell += 1
        return maxProf


            
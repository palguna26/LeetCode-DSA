class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price=float('inf')
        profit=0
        best_profit=0
        for price in prices:
            min_price=min(price,min_price)
            profit=price-min_price
            best_profit=max(profit,best_profit)
        
        return best_profit
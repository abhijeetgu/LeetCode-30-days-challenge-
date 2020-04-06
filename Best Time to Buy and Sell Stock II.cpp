// --- Solution -1
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit=0;
        for(int i=0;i<n-1;i++)
        {
            int p = prices[i+1]-prices[i];
            if(p>0)
            {
                profit += p; 
            }
        }
        return profit;
    }
};

// --- solution -2(by Errichto)
class Solution {
    const int inf = 1e9 + 5;
public:
    int maxProfit(vector<int>& prices) {
        int best_without_stock = 0,best_with_stock = -inf;
        
        for(int x : prices)
        {
            best_with_stock = max(best_without_stock-x,best_with_stock);
            best_without_stock = max(best_without_stock,best_with_stock+x);
            
        }
        return best_without_stock;
        
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        size_t buyindex{0}, sellindex{buyindex+1};
        int pnl {};
        while(buyindex < prices.size()-1)
        {
            sellindex = buyindex + 1;
            while(sellindex < prices.size())
            {
                //std::cerr << "buy: " << buyindex << " sell:" << sellindex << " pnl:" << pnl << "\n";
                if (prices[sellindex] - prices[buyindex] < 0)
                {
                    if(buyindex + 1 < prices.size() && sellindex + 1 < prices.size())
                    {
                        ++buyindex;
                        ++sellindex;
                    }
                }
                if(pnl < prices[sellindex] - prices[buyindex])
                {
                    pnl = prices[sellindex] - prices[buyindex];
                }
                ++sellindex;
            }
            ++buyindex;
        }
        return pnl;
    }
};

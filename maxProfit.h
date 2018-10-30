//
// Created by yanch on 2018/10/30.
// leetcode 121 买股票的最佳时机
//

#ifndef LEETCODE_DP_MAXPROFIT_H
#define LEETCODE_DP_MAXPROFIT_H

#endif //LEETCODE_DP_MAXPROFIT_H
#include <vector>
using namespace std;
class MaxProfit
{
public:
    int maxProfit(vector<int> &prices)
    {
        if(prices.size() == 0 || prices.size() == 1)
            return 0;
        int p = 0;
        int m = prices.size();
        int minN = prices[0];
        for(int i=0;i<m;i++)
        {
            if(prices[i] < minN)
                minN = prices[i];
            else
            {
                int t = prices[i] - minN;
                p = max(t,p);
            }
        }
        return p;
    }
};
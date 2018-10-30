//
// Created by yanch on 2018/10/30.
// leetcode 122 买股票的最佳时机 2
//

#ifndef LEETCODE_DP_MAXPROFIT2_H
#define LEETCODE_DP_MAXPROFIT2_H

#endif //LEETCODE_DP_MAXPROFIT2_H
#include <vector>
using namespace std;
class MaxProfit2
{
public:
    int maxProfit(vector<int> &prices)
    {
        int p = 0;
        int m = prices.size();
        int minN = prices[0], maxN = prices[0];
        int pro = 0;
        for(int i=0;i<m;i++)
        {
            if(prices[i] < maxN) //down
            {
                pro += (maxN - minN);
                maxN = prices[i];
                minN = prices[i];
            }
            else if(prices[i] > minN) //up
            {
                maxN = prices[i];
            }
        }
        pro += (maxN - minN);
        return pro;
    }
};
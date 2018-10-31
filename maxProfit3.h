//
// Created by yanch on 2018/10/31.
// leetcode 123 买卖股票最佳时机3

#ifndef LEETCODE_DP_MAXPROFIT3_H
#define LEETCODE_DP_MAXPROFIT3_H

#endif //LEETCODE_DP_MAXPROFIT3_H
#include <vector>
using namespace std;
class MaxProfit3
{
public:
    int maxProfit(vector<int> & prices)
    {
        int p = 0;
        int m = prices.size();
        int minN = prices[0];
        int pro = 0;
        //two travels
        int left[m],right[m];
        for(int i=0;i<m;i++)
        {
            left[i] = 0;
            right[i] = 0;
        }
        for(int i=0;i<m;i++)
        {// ->
            if(prices[i] < minN)
                minN = prices[i];
            else
                pro = max((prices[i] - minN), pro);
            left[i] = pro;
        }
        int maxN = 0;
        pro = 0;
        for(int i=m-1;i>=0;i--)
        {// <-
            if(prices[i] > maxN)
                maxN = prices[i];
            else
                pro = min((prices[i] - maxN), pro);
            right[i] = pro;
        }
        pro = 0;
        for(int i=0;i<m;i++)
        {
            if(left[i] - right[i] > pro)
                pro = left[i] - right[i];
        }
        return pro;
    }
};
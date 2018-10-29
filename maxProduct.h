//
// Created by yanch on 2018/10/29.
// leetcode 152 乘积最大子序列
//

#ifndef LEETCODE_DP_MAXPRODUCT_H
#define LEETCODE_DP_MAXPRODUCT_H

#endif //LEETCODE_DP_MAXPRODUCT_H
#include <vector>
using namespace std;
class MaxProduct
{
public:
    int maxProduct(vector<int> &nums)
    {
        int m = nums.size();
        int p = 1;
        int maxN = nums[0],minN = nums[0];
        int result = nums[0];
        for(int i=1;i<m;i++)
        {
            int r1 = maxN*nums[i];
            int r2 = minN*nums[i];
            maxN = max(max(r1,r2),nums[i]);
            minN = min(min(r1,r2),nums[i]);
            result = max(result,maxN);
            cout<<maxN<<"\t"<<minN<<"\t"<<result<<endl;
        }
        cout<<endl;
        return result;
    }
};


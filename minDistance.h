//
// Created by yanch on 2018/10/28.
// leetcode 72 编辑距离

#ifndef TEST_MINDISTANCE_H
#define TEST_MINDISTANCE_H

#endif //TEST_MINDISTANCE_H
#include "string"
using namespace std;
class MinDistance
{
public:
    int minDistance(string word1, string word2)
    {
        int m = word1.length(),n = word2.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 0;
        for(int i=1;i<=m;i++)
            dp[i][0] = i;
        for(int j=1;j<=n;j++)
            dp[0][j] = j;

        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                {
                    int add = dp[i-1][j];
                    int del = dp[i][j-1];
                    int alt = dp[i-1][j-1];
                    dp[i][j] = min(min(add,del),alt) + 1;
                }
            }
        }
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<dp[i][j]<<" ";
            }cout<<endl;
        }
        return dp[m][n];
    }
};
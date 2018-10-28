//
// Created by yanch on 2018/10/28.
// leetcode 32 最长有效括号

#ifndef TEST_LONGESTVALIDPARENTHESES_H
#define TEST_LONGESTVALIDPARENTHESES_H

#endif //TEST_LONGESTVALIDPARENTHESES_H
#include "string"
using namespace std;
class LongestValidParentheses
{
public:
    int longestValidParentheses(string s) {
        int len = s.length();
        int dp[len][len];
        for (int i = 0; i < len; i++)
        {
            for(int j=0;j<len;j++)
            {
                dp[i][j] = 0;
            }
        }
        return 0;
    }
};
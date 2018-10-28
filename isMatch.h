//
// Created by yanch on 2018/10/28.
// leetcode 10 正则表达式匹配
//

#ifndef TEST_ISMATCH_H
#define TEST_ISMATCH_H

#endif //TEST_ISMATCH_H
#include "string"
using namespace std;
class IsMatch
{
    /* string s ; 模式 p
     * [.] 匹配单个字符，[*]匹配任意数量的字符
     * */
public:
    bool isMatch(string s, string p)
    {
        if(s == "" && p == "")
        {
            return 1;
        }
        int m = s.length();
        int n = p.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++) // init
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 1;
        for(int i=0;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>0 && (s[i-1] == p[j-1] || p[j-1] == '.'))
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[j-1] == '*')
                {
                    if (i == 0 || (s[i-1] != p[j - 2] && p[j - 2] != '.'))
                    {
                        dp[i][j] = dp[i][j - 2];
                    }
                    else
                    {
                        dp[i][j] = (dp[i - 1][j] == 1 || dp[i][j - 1] == 1 || dp[i][j - 2] == 1);
                    }
                }
            }
        }
        return dp[m][n];
    }
};


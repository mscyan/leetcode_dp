//
// Created by yanch on 2018/10/28.
// leetcode 44 通配符匹配
//

#ifndef TEST_ISMATCH2_H
#define TEST_ISMATCH2_H

#endif //TEST_ISMATCH2_H
#include "string"
using namespace std;
class IsMatch2
{
public:
    /**
     * [?] 匹配 任意单个 字符
     * [*] 匹配 任意 字符串
     * 与leetcode10 区别在于，?和*是通配符，而不是数量计数符号
     */
    bool isMatch(string s, string p)
    {
        if(p.length() == 1 && p[0] == '*')
            return true;
        int m = s.length(),n = p.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 1;
        for (int i=0;i<p.size();i++)
            if (p[i]=='*' && dp[0][i]) dp[0][i+1] = true;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(p[j-1] == '*')
                    dp[i][j] = (dp[i-1][j] == 1 || dp[i][j-1] == 1 || dp[i-1][j-1]);
                else
                    dp[i][j] = dp[i-1][j-1] && (s[i-1]==p[j-1] || p[j-1] == '?');
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




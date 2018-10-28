//
// Created by yanch on 2018/10/27.
// Leetcode 5 最长回文子串
//

#ifndef TEST_LONGESTPALINDROME_H
#define TEST_LONGESTPALINDROME_H

#endif //TEST_LONGESTPALINDROME_H
#include "string"
using namespace std;
class LongestPalindrome
{
public:
    string longestPalindrome(string s)
    {
        if(s.length() == 0 || s.length() == 1)
        {
            return s;
        }
        int len = s.length();
        int max_len = 1;
        int start = 0;
        int dp[len][len];
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i==j)
                    dp[i][i] = 1;
                else if(i-1==j)
                    dp[i][j] = (s[i] == s[j]);
                else
                {
                    dp[i][j] = ((dp[i-1][j+1]==1) && (s[i] == s[j]));
                }
                if(dp[i][j] == 1)
                {
                    if(i-j+1 > max_len)
                    {
                        max_len = i-j+1;
                        start = j;
                    }
                }
            }
        }
        string tmp = "";
        for(int i = 0;i<max_len;i++)
        {
            tmp = tmp + s[start+i];
//            cout<<tmp<<endl;
        }
        return tmp;
    }
};





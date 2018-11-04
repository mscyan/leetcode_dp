//
// Created by yanch on 2018/11/4.
// leetcode 91 解码方法
//

#ifndef LEETCODE_DP_NUMDECODINGS_H
#define LEETCODE_DP_NUMDECODINGS_H

#endif //LEETCODE_DP_NUMDECODINGS_H
#include "string"
using namespace std;
class NumDecodings
{
public:
    int numDecodings(string s)
    {
        s = "1111";
        cout<<s<<endl;
        int c = 0;
        int dp[s.length()];
        dp[0] = 1;
        for(int i=1;i<s.length();i++)
        {
            if( ((s[i]-'0') + (s[i-1]-'0')*10) <= 26 && ((s[i]-'0') + (s[i-1]-'0')*10) > 10 )
            {
                if((((s[i]-'0') + (s[i-1]-'0')*10)) % 10 == 0)
                    if(i > 1)
                        dp[i] = dp[i-2];
                    else
                        dp[i] = dp[i-1];
                else
                    if(i>2)
                        dp[i] = dp[i-1] + dp[i-2];
                    else
                        dp[i] = dp[i-1] + 1;
            }
            else if(((s[i]-'0') + (s[i-1]-'0')*10) > 26)
            {
                if(((s[i]-'0') + (s[i-1]-'0')*10) % 10 != 0)
                    dp[i] = dp[i-1];
                else
                    return 0;
            }
            else if(((s[i]-'0') + (s[i-1]-'0')*10) <= 10 && ((s[i]-'0') + (s[i-1]-'0')*10) > 0)
            {
                if(((s[i]-'0') + (s[i-1]-'0')*10) % 10 == 0)
                    if(i > 1)
                        dp[i] = dp[i-2];
                    else
                        dp[i] = dp[i-1];
                else
                    dp[i] = dp[i-1];
            }
            else if (((s[i]-'0') + (s[i-1]-'0')*10) == 0)
                return 0;
        }
        for(int i=0;i<s.length();i++)
            cout<<dp[i]<<"\t";
        cout<<endl;
        c = dp[s.length()-1];
        return c;
    }
};
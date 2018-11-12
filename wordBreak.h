//
// Created by yanch on 2018/11/5.
// leetcode 139 单词拆分
//

#ifndef LEETCODE_DP_WORDBREAK_H
#define LEETCODE_DP_WORDBREAK_H

#endif //LEETCODE_DP_WORDBREAK_H

#include "string"
#include <vector>
using namespace std;
class WordBread
{
public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        wordDict.push_back("cats");
        wordDict.push_back("dog");
        wordDict.push_back("sand");
        wordDict.push_back("and");
        wordDict.push_back("cat");

        s = "catsandog";

        vector<int> dp(s.length()+1,0);
        dp[0] = 1;
        for(int i=0;i<=dp.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
//                cout<<i<<"--"<<endl;
                if(dp[j] == 1 && contains(wordDict,s,j,i))
                {
                    cout<<j<<" "<<i<<endl;
                    dp[i+1] = 1;
//                    break;
                }
            }
        }
        for(int i=0;i<dp.size();i++)
        {
            cout<<dp[i]<<" ";
        }cout<<endl;
        return false;
    }

    bool contains(vector<string>& wordDict,string s,int l,int r)
    {
        string s1 = "";
        for(int i=l;i<=r;i++)
        {
            s1 += s[i];
        }
//        cout<<s1<<" "<<l<<" "<<r<<endl;
        for(int i=0;i<wordDict.size();i++)
        {
            if(wordDict[i] == s1)
            {
                cout << wordDict[i] << " " << s1 << endl;
                return true;
            }
        }
        return false;
    }
};
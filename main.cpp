#include <iostream>
#include <vector>
#include <string>
#include "longestPalindrome.h"          // 5 最长回文子串
#include "longestValidParentheses.h"    // 32 最长有效括号
#include "isMatch.h"                    // 10 正则表达式匹配
#include "isMatch2.h"                   // 44 通配符匹配
#include "minDistance.h"                // 72 编辑距离
#include "threeSum.h"                   // 15 三数之和
#include "maxProduct.h"                 // 152 乘积最大子序列
#include "isScramble.h"                 // 87 扰乱字符串
#include "maxProfit.h"                  // 121 买卖股票的最佳时机
#include "maxProfit2.h"                 // 122 买卖股票的最佳时机2
#include "maxProfit3.h"                 // 123 买卖股票的最佳时机3
using namespace std;
int main()
{
//    LongestPalindrome so;
//    cout<<so.longestPalindrome("abcdaba");

//    LongestValidParentheses so;
//    cout<<so.longestValidParentheses(")()())");

//    IsMatch so;
//    cout<<so.isMatch("aab","c*a*b");

//    isMatch2 so;
//    cout<<so.isMatch("ab","***a?")<<endl;

//    MinDistance so;
//    cout<<so.minDistance("abc2313","ab");

//    ThreeSum so;
//    int a[] = {-1,0,1,2,-1,-4};
//    vector<int> v(a,a+5);
//    vector<vector<int> > vv = so.threeSum(v);
//    for(int i=0;i<vv.size();i++)
//    {
//        for(int j=0;j<vv[i].size();j++)
//        {
//            cout<<vv[i][j]<<" ";
//        }cout<<endl;
//    }

//    MaxProduct so;
//    int arr[] = {3,-2,2,4};
//    vector<int> v(arr,arr+4);
//    cout<<so.maxProduct(v);

//    IsScramble so;
//    cout<<so.isScramble("great","rgeat");

//    int ar[] = {7,6,4,3,1,2};
//    vector<int> v(ar,ar+6);
//    MaxProfit so;
//    cout<<so.maxProfit(v);

//    int ar[] = {7,1,5,3,6,4,9,6};
//    vector<int> v(ar,ar+8);
//    MaxProfit2 so;
//    cout<<so.maxProfit(v);

    int ar[] = {3,3,5,0,0,3,1,4};
    vector<int> v(ar,ar+8);
    MaxProfit3 so;
    cout<<so.maxProfit(v);

    return 0;
}
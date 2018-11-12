#include <iostream>
#include <vector>
#include <string>
#include "longestPalindrome.h"          // 5    最长回文子串
#include "longestValidParentheses.h"    // 32   最长有效括号
#include "isMatch.h"                    // 10   正则表达式匹配
#include "isMatch2.h"                   // 44   通配符匹配
#include "minDistance.h"                // 72   编辑距离
#include "threeSum.h"                   // 15   三数之和
#include "maxProduct.h"                 // 152  乘积最大子序列
#include "isScramble.h"                 // 87   扰乱字符串
#include "maxProfit.h"                  // 121  买卖股票的最佳时机
#include "maxProfit2.h"                 // 122  买卖股票的最佳时机2
#include "maxProfit3.h"                 // 123  买卖股票的最佳时机3
#include "minCut2.h"                    // 132  分割回文串2
#include "lengthOfLIS.h"                // 300  最长上升子序列
#include "minPathSum.h"                 // 64   最小路径和
#include "cherryPickup.h"               // 741  摘樱桃
#include "uniquePathsWithObstacles.h"   // 63   不同路径2
#include "numDecodings.h"               // 91   解码方法
#include "wordBreak.h"                  // 139  单词拆分
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

//    int ar[] = {3,3,5,0,0,3,1,4};
//    vector<int> v(ar,ar+8);
//    MaxProfit3 so;
//    cout<<so.maxProfit(v);

//    MinCut2 so;
//    cout<<so.minCut("aaabaa");

//    LengthOfLIS so;
//    int ar[] = {10,9,2,5,3,7,101,18};
//    vector<int> v(ar,ar+8);
//    cout<<so.lengthOfLIS(v);

//    MinPathSum so;
//    vector<vector<int>> vv;
//    vector<int> v1 = {1,3,1};
//    vector<int> v2 = {1,5,1};
//    vector<int> v3 = {4,2,1};
//    vv.push_back(v1);
//    vv.push_back(v2);
////    vv.push_back(v3);
//    cout<<so.minPathSum(vv);

//    CherryPickup so;
//    vector<vector<int>> vv;
//    vector<int> v1 = {0,1,-1};
//    vector<int> v2 = {1,0,-1};
//    vector<int> v3 = {1,1,1};
//    vv.push_back(v1);
//    vv.push_back(v2);
//    vv.push_back(v3);
//    cout<<so.cherryPickup(vv);

//    UniquePathsWithObstacles so;
//    vector<vector<int>> vv;
//    vector<int> v1 = {0};
//    vector<int> v2 = {1};
//    vector<int> v3 = {0};
//    vector<int> v4 = {0};
//    vv.push_back(v1);
//    vv.push_back(v2);
//    vv.push_back(v3);
//    vv.push_back(v4);
//    cout<<so.uniquePathsWithObstacles(vv);

//    NumDecodings so;
//    cout<<so.numDecodings("23");

    WordBread so;
    vector<string> v ;
    cout<<so.wordBreak("",v);
    return 0;
}
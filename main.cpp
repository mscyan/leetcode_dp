#include <iostream>
#include <vector>
#include <string>
#include "longestPalindrome.h"
#include "longestValidParentheses.h"
#include "isMatch.h"
#include "isMatch2.h"
#include "minDistance.h"
#include "threeSum.h"
#include "maxProduct.h"
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

    MaxProduct so;
    int arr[] = {2,-2,3,4};
    vector<int> v(arr,arr+4);
    cout<<so.maxProduct(v);
    return 0;
}
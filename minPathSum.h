//
// Created by yanch on 2018/11/4.
// leetcode 64 最小路径和
//

#ifndef LEETCODE_DP_MINPATHSUM_H
#define LEETCODE_DP_MINPATHSUM_H

#endif //LEETCODE_DP_MINPATHSUM_H
#include <vector>
using namespace std;
class MinPathSum
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int c = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(i == 0 && j > 0)
                {
                    grid[i][j] += grid[i][j-1];
                }
                else if(j == 0 && i > 0)
                {
                    grid[i][j] += grid[i-1][j];
                }
                else if(i > 0 && j > 0)
                    grid[i][j] += min(grid[i-1][j],grid[i][j-1]);
            }
        }
        c = grid[grid.size()-1][grid[0].size()-1];
        return c;
    }
};
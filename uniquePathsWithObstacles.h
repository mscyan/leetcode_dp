//
// Created by yanch on 2018/11/4.
// leetcode 63 不同路径2
// beat 4.47%

#ifndef LEETCODE_DP_UNIQUEPATHSWITHOBSTACLES_H
#define LEETCODE_DP_UNIQUEPATHSWITHOBSTACLES_H

#endif //LEETCODE_DP_UNIQUEPATHSWITHOBSTACLES_H
#include <vector>
using namespace std;
class UniquePathsWithObstacles
{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
    {
        for(int i=0;i<obstacleGrid.size();i++)
        {
            for(int j=0;j<obstacleGrid[i].size();j++)
            {
                cout<<obstacleGrid[i][j]<<" ";
            }cout<<endl;
        }
        if(obstacleGrid[0][0] == 1 || obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1] == 1)
            return 0;
        if(obstacleGrid[0].size() == 1 && obstacleGrid.size() == 1)
            return 1;
        int c = 0;
        for(int i=0;i<obstacleGrid.size();i++)
        {
            for(int j=0;j<obstacleGrid[i].size();j++)
            {
                if(obstacleGrid[i][j] == 1)
                    obstacleGrid[i][j] = 2147483647;
                else
                {
                    if(i == 0 && j > 0)
                    {
                        obstacleGrid[i][j] = (obstacleGrid[i][j-1] < 2147483647) ? 1 : 2147483647;
                    }
                    else if(i > 0 && j == 0)
                    {
                        obstacleGrid[i][j] = (obstacleGrid[i-1][j] < 2147483647) ? 1 : 2147483647;
                    }
                    else if(i > 0 && j > 0)
                    {
                        obstacleGrid[i][j] = (obstacleGrid[i-1][j] < 2147483647 ? obstacleGrid[i-1][j] : 0) + (obstacleGrid[i][j-1] < 2147483647 ? obstacleGrid[i][j-1] : 0);
                    }
                }

            }
        }
        for(int i=0;i<obstacleGrid.size();i++)
        {
            for(int j=0;j<obstacleGrid[i].size();j++)
            {
                cout<<obstacleGrid[i][j]<<" ";
            }cout<<endl;
        }
        c = obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
        return c < 2147483647 ? c : 0;
    }
};
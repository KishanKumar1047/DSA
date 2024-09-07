// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {
//         int rows = grid.size() ;
//         int cols = grid[0].size() ;
//         // for rows flipping
//         for(int i = 0 ; i<rows ; i++)
//         {
//             if(grid[i][0]==0) {
//                 for (int j = 0 ; j<cols ; j++) {
//                     if(grid[i][j]== 0 ) {
//                         grid[i][j] = 1;
//                     }
//                     else {
//                         grid[i][j] = 0;
//                     }
//                 }
//             }
//         }

//     for(int j = 0 ; j<cols ; j++) {
//         int noo = 0;
//         int noz = 0;
//         for(int i = 0 ; i<rows ; i++) {
//             if (grid[i][j] == 0) {
//                 noz ++ ;
//             }else {
//                 noo++ ;
//             }
//         }if (noz>noo) {
//             for(int i = 0 ; i<rows ; i++) {
//                    if(grid[i][j]== 0 ) {
//                         grid[i][j] = 1;
//                     }
//                     else {
//                         grid[i][j] = 0;
//                     }
//             }
//         }
//     }
//     int sum = 0;

//     for(int i = 0 ; i<rows ; i++) {
//          int m = 1;
//         for(int j = cols - 1; j>=0 ; j--) {
//             sum += grid[i][j]*m ;
//             m *= 2;
//         }
//     }
//     return sum ;
// } ;

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> grid;
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);

    grid.push_back(v1);
    grid.push_back(v2);
    grid.push_back(v3);

    int rows = grid.size();
    int cols = grid[0].size();
    // for rows flipping
    for (int i = 0; i < rows; i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 0)
                {
                    grid[i][j] = 1;
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }
    }

    // for columnn flipping
    for (int j = 0; j < cols; j++)
    {
        int noo = 0;
        int noz = 0;
        for (int i = 0; i < rows; i++)
        {
            if (grid[i][j] == 0)
            {
                noz++;
            }
            else
            {
                noo++;
            }
        }
        if (noz > noo)
        {
            for (int i = 0; i < rows; i++)
            {
                if (grid[i][j] == 0)
                {
                    grid[i][j] = 1;
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }
    }
    int sum = 0;
    // to print sum
    for (int i = 0; i < rows; i++)
    {
        int m = 1;
        for (int j = cols - 1; j >= 0; j--)
        {
            sum += grid[i][j] * m;
            m *= 2;
        }
    }
    cout<<sum ;
    return 0;
}

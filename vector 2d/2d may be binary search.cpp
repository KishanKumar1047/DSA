// binary search type
// for sorted array

#include <iostream>
#include <vector>
using namespace std;

int test(vector<vector<int>> &grid, int target)
{

    // int target = 5;
    int rows = grid.size();
    int cols = grid[0].size();
    int i = 0;
    int j = cols - 1;
    while (i < rows && j >= 0)
    {
        if (grid[i][j] == target)
            return true;
        else if (grid[i][j] > target)
            j--;
        else
            i++;
    }
    return false;
}
int main()
{
    vector<vector<int>> grid;
    int target = 5;
 
   vector<int> v1 = {1, 4, 7, 11, 15};
    vector<int> v2 = {2, 5, 8, 12, 19};
    vector<int> v3 = {3, 6, 9, 16, 22};
    vector<int> v4 = {10, 13, 14, 17, 24};
    vector<int> v5 = {18, 21, 23, 26, 30};

    
 // Add vectors to grid
    grid.push_back(v1);
    grid.push_back(v2);
    grid.push_back(v3);
    grid.push_back(v4);
    grid.push_back(v5);

cout<<test(grid , target) ;
    return 0;
}

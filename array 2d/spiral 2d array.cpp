#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows for 1st matrix :";
    cin >> m;
    int n;
    cout << "enter number of column for 1srt matrix :";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;

  while(minr<=maxr && minc<=maxc) {
    // for right
      for(int j = minc ; j<=maxc ; j++) {
        cout<<arr[minr][j]<<" " ;
    }
    minr ++ ;

if (minc>maxc || minr>maxr) break;
// for down
    for(int i = minr ; i<=maxr ; i++) {
        cout<<arr[i][maxc]<<" ";
    }
    maxc-- ;

if (minc>maxc || minr>maxr) break;
// for left
    for(int j = maxc ; j>= minc ; j--) {
        cout<<arr[maxr][j]<<" " ;
    }
    maxr -- ;
    
if (minc>maxc || minr>maxr) break;
    // for up
    for(int i = maxr ; i>= minr ; i--) {
        cout<<arr[i][minc]<<" " ;
    }
    minc ++ ;
  }

    return 0;
}
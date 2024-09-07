#include <iostream>
#include <vector>
#include <algorithm> // aslo direct use reverse built in fxn like sort .

using namespace std;

void reverse (int i , int j , vector<int>& v) {
     
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++ ;
        j-- ;
    }
}

int main()
{    int k ;
    cout<<"Enter value for rotation " ;
    cin>>k;
    vector<int> v;
    v.push_back(0);
    v.push_back(8);
    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(90);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {

        cout << v.at(i) << " ";
    }
    cout << endl;
    int n = v.size() ;
    if (k>n) k = k%n;
    reverse(0 , n - k -1, v) ;
    reverse(n - k , n - 1, v) ;
    reverse(0 , n-1, v) ;

     for (int i = 0; i < v.size(); i++)
    {

        cout << v.at(i) << " ";
    }

    return 0;


}


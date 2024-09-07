// sorting issue
// 1. next permutation of array
#include <iostream>
#include <vector>
using namespace std;

 void merge ( vector<int>& a ,  vector<int>& b ,vector<int>& v) {
    int n = a.size() ;
    int m = b.size() ;
    int i = 0;
    int j = 0;
    int k = 0;
        while (i<n && j<m) {
            if(a[i]<=b[j]) {
                v[k] = a[i] ;
                i++ ;
            }
            else {
                v[k] = b[j] ;
                j++ ;
            }
            k++ ;
        }
        if(i == n) {
            while(j<m) {
                v[k] = b[j] ;
            j++ ;
            k++ ;
            }
        }

        if(j == m) {
            while(i<n) {
                v[k] = a[i] ;
            i++ ;
            k++ ;
            }
        }
    
      
 }

 void mergesort(vector<int> &v) {
    int n = v.size();
    int k = n/2;
    int m = n - n/2;
    if(n==1) return ;
    vector<int> a(k) , b(m);
    for(int i = 0 ; i<k ; i++){
        a[i] = v[i];
    }
    for(int i = 0 ; i<m ; i++){
        b[i] = v[i + k];
    }

    mergesort(a);
    mergesort(b);

    merge(a , b, v);



 }
int main()
{

    vector<int> v = { 2, 3, 4, 7,1 , 12 , 25 ,8};
    mergesort(v);

    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

    return 0;
}
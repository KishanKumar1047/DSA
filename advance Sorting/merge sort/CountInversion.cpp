#include <iostream>
#include <vector>
using namespace std;

int inversion(vector<int>& a, vector<int>& b) {
    int count = 0;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] > b[j]) {
            count += (a.size() - i); // Fix: add all remaining elements in 'a' to the count
            j++;
        } else {
            i++;
        }
    }
    return count;
}

void merge(vector<int>& a, vector<int>& b, vector<int>& v) {
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) v[k++] = a[i++];
        else v[k++] = b[j++];
    }
    while (i < n) v[k++] = a[i++];
    while (j < m) v[k++] = b[j++];
}

int mergesort(vector<int>& v) {
    int count = 0;
    int n = v.size();
    if (n <= 1) return 0; // Fix: base case for recursion

    int k = n / 2;
    vector<int> a(k), b(n - k);
    for (int i = 0; i < k; i++) {
        a[i] = v[i];
    }
    for (int i = 0; i < n - k; i++) {
        b[i] = v[i + k];
    }

    count += mergesort(a);
    count += mergesort(b);
    count += inversion(a, b);

    merge(a, b, v);

    return count;
}

int main() {
    vector<int> v = {5, 1, 8, 2, 3};

   cout<<mergesort(v);
   

    return 0;
}

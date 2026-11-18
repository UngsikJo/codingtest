#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    cout << a[k-1];
    return 0;
}
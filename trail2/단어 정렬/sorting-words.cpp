#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i =0; i<n; i++){
        cout << a[i] << endl;
    }

    return 0;
}
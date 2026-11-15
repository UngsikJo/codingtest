#include <iostream>
using namespace std;

void f(int *a, int n){
    for(int i =0; i<n; i++){
        if(a[i]%2 ==0){
            a[i] /= 2;
        }
        cout << a[i] << " ";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    f(a, n);
    return 0;
}
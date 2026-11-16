#include <iostream>
using namespace std;

int f(int n){
    if(n == 1){
        return 1;
    }
    return f(n-1) * n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
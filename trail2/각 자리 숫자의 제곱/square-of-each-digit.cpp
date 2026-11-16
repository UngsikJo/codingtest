#include <iostream>
using namespace std;

int f(int n){
    if(n == 0){
        return 0;
    }
    int b = n%10;
    return f(n/10) + (b*b);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
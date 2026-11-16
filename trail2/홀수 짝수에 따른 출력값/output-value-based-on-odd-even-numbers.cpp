#include <iostream>
using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n%2 != 0){
        return f(n-2) + n;
    }
    else if(n%2 == 0){
        return f(n-2) + n;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
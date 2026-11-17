#include <iostream>
using namespace std;

int f(int n){
    if(n==0){
        return 0;
    }
    return f(n/10) + n%10;
}

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    int result = a*b*c;
    cout << f(result);
    return 0;
}
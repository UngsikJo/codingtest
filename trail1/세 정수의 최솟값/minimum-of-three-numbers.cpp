#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
   
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= b && a <= c) {
        cout << a << endl;
    }
    // b가 가장 작은 경우
    else if(b <= a && b <= c) {
        cout << b << endl;
    }
    // c가 가장 작은 경우
    else {
        cout << c << endl;
    }


    return 0;
}
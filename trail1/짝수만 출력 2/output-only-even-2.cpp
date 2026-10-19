#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> b >> a;
    while(a <= b){
        if(b%2 ==0){
            cout << b << " ";
        }
        b--;
    }
    return 0;
}
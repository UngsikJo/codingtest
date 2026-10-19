#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int tmp = a;
    tmp /=b;
    cout << tmp << ".";

    a %= b;
    a *= 10;
    int i = 1;
    while(i<=20){
        cout << a/b;
        a %= b;
        a *= 10;
        i++;
    }

    return 0;
}
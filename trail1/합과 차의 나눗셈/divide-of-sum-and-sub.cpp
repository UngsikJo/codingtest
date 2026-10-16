#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a>> b;
    double sum = (a+b);
    double dif = (a-b);
    double result = sum/dif;
    cout << fixed;
    cout.precision(2);
    cout << result;
    return 0;
}
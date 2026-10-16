#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    int a = 13;
    double b= 0.165000;
    double result = a*b;
    cout.precision(6);
    cout << a <<" * "<< b << " = " << result;
    return 0;
}
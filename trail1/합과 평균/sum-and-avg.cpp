#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a>> b;
    double sum = a+b;
    double avg = sum / 2;
    cout << fixed;
    cout.precision(1);
    cout <<a+b<<" "<< avg;
    return 0;
}
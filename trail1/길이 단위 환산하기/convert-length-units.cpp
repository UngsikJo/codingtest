#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    double ft = 30.48;
    double input;
    cin >> input;
    cout.precision(1);
    cout << ft*input;
    return 0;
}
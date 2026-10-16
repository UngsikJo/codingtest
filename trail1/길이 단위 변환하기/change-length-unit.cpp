#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    double a = 30.48, b = 160934;
    cout.precision(1);

    cout << 9.2<<"ft = "<< 9.2*a<<"cm"<<endl;
    cout << 1.3<<"mi = "<< 1.3*b<<"cm";

    return 0;
}
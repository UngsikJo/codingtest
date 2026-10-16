#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a>>b>>c;
    double sum = a+b+c;
    double avg = sum/3;
    cout << fixed;
    cout.precision(0);
    cout << sum <<endl;
    cout << (int)(avg);
    return 0;
}
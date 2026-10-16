#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >>a>>b>>c;
    double sum = a+b+c;
    double avg = sum /3;
    cout << (int)(sum) << endl;
    cout << (int)(avg) << endl;
    cout << (int)(sum - avg);
    

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int sum=0, count=0;
    double avg;
    while(true){
        cin >> a;
        if(a>=20 and a<=29){
            sum += a;
            count++;
            continue;
        }
        break;
    }
    avg = (double)(sum)/(double)(count);
    cout << fixed;
    cout.precision(2);
    cout << avg;
    return 0;
}
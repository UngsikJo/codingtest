#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int cnt =0;
    for(int i =0; i<10; i++){
        cin >> a[i];
        if(a[i]==0){
            break;
        }
        cnt++;
    }
    int sum = 0;
    for(int i=0; i<=cnt-1; i++){
        sum += a[i];
    }
    double avg = (double)sum/cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0;
    int count = 0;
    int n;
    int a[10];
    for(int i =0; i<=9 ;i++){
        cin >> a[i];
        if(a[i]>=250){
            break;
        }
        sum += a[i];
        count++;
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double)sum/count;
    return 0;
}
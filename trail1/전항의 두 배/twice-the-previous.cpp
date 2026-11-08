#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[100];
    cin >> a[0] >> a[1];
    cout << a[0] << " " << a[1]<<" ";
    int i =2;
    while(i<10){
        a[i] = 2*a[i-2] + a[i-1];
        cout << a[i] << " ";
        i++;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[100];
    a[0] = 1;
    cout << a[0] << " ";
    a[1] = n;
    cout << a[1] << " ";
    int i = 2;
    while(true){
        a[i] = a[i-2] + a[i-1];
        cout << a[i] << " ";
        if(a[i] >= 100){
            break;
        }
        i++;
    }
    return 0;
}
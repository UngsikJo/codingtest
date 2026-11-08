#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[100];
    int i=0;
    while(true){
        cin >> a[i];
        if(a[i] == 0){
            break;
        }
        if(a[i]%2 != 0){
            cout << a[i] + 3 << " ";
        }
        if(a[i]%2 == 0){
            cout << a[i]/2 << " ";
        }
        i++;
    }
    return 0;
}
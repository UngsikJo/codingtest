#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    for(int i =0; i<10; i++){
        cin >> a[i];
    }
    int max = a[0];
    for(int i =0; i<10; i++){
        if(max <= a[i]){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
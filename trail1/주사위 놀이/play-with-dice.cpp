#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[6];
    for(int i =0 ;i<6;i++){
        a[i] = 0;
    }
    int tmp;
    for(int i =0; i<10; i++){
        cin >> tmp;
        a[tmp-1]++;
    }
    for(int i=1; i<=6; i++){
        cout << i << " - " << a[i-1] << endl;
    }
    return 0;
}
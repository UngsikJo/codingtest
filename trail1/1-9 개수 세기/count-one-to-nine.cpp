#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[9];
    for(int i =0; i<9; i++){
        a[i] =0;
    }
    int n;
    cin >> n;
    int tmp;
    for(int i = 1; i<=n; i++){
        cin >> tmp;
        a[tmp-1]++;
    }
    for(int i =0; i<9; i++){
        cout << a[i] << endl;
    }
    return 0;
}
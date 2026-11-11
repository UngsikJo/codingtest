#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[5][5] = {0,};
    for(int i =0; i<5; i++){
        a[0][i] = 1;
        a[i][0] = 1;
    }
    for(int i =1;i<5;i++){
        for(int j =1; j<5; j++){
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    for(int i =0; i<5; i++){
        for(int j =0; j<5; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
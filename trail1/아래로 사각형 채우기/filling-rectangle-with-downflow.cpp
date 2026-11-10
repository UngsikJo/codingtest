#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n][n] = {0,};
    int count = 1;
    for(int i =0; i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = count;
            count++;
        }
    }
    for(int i =0; i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[j][i] << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
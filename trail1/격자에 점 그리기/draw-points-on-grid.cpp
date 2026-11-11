#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int m;

    cin >> n >> m;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j] = 0;
        }
    }
    int r, c;
    int count = 1;
    for(int i =0; i<m; i++){
        cin >> r >> c;
        a[r-1][c-1] = count;
        count++;
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
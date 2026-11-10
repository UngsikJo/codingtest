#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    int a[n][m] ={0,};
    int count =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            a[i][j] = count;
            cout << a[i][j] << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
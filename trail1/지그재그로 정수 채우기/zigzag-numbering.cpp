#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    int a[n][m] = {0,};
    int count = 0;
    for(int i =0;i<m;i++){
        for(int j=0;j<n; j++){
            a[j][i] = count;
            count++;
        }
    }
    
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            if(j%2 == 0){
                cout << a[i][j] << " ";
            }
            else{
                cout << a[n-i-1][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
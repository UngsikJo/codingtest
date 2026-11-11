#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n][n]={0,};
    int count =1;
    for(int i=0; i<n; i++){
        int h = n-i-1;
        if(i%2 == 0){
            for(int j=n-1;j>=0;j--){
                a[j][h] = count;
                count++;
            }
        }
        else if(i%2 != 0){
            for(int j=0;j<n;j++){
                a[j][h] = count;
                count++;
            }
        }
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
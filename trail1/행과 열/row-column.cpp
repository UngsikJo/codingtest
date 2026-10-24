#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int r,c;
    cin >> r >> c;
    for(int i = 1 ;i <= r; i++){
        for(int j =1; j<=c;j++){
            cout << i*j << " ";
        }
        cout << endl;
    }

    return 0;
}
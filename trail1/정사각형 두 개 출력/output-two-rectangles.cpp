#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
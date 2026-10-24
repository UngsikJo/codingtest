#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a = 11;
    for(int i=1;i<=n;i++){
        int b = a;
        for(int j=1;j<=n ;j++){
            
            cout << b << " ";
            b += 2;
        }
        a += 2;
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =1; i<=n; i++){
        int b = n-i+1;
        for(int j =1; j<=i; j++){
            cout << b << " ";
            b++;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =n; i>=1; i--){
        int tmp = i;
        for(int j=1; j<=n-i;j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << tmp << " ";
            tmp--;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a[4];
    for(int i =0; i<4; i++){
        cin >> a[i];
    }
    for(int i=3; i>=0; i--){
        cout << a[i] << endl;
    }

    return 0;
}
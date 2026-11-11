#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a[10];
    for(int i =0; i<10; i++){
        cin >> a[i];
    }
    for(int i =0; i<10; i++){
        if(i%2 == 0){
            cout << a[i] << endl;
        }
    }
    return 0;
}
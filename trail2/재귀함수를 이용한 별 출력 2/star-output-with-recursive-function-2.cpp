#include <iostream>
using namespace std;

void f(int n){
    if(n==0){
        return;
    }
    for(int i =0; i<n ;i++){
        cout << "*" <<" ";
    }
    cout << endl;
    f(n-1);
    for(int i =0; i<n; i++){
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    f(n);
    return 0;
}
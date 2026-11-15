#include <iostream>
using namespace std;

void f(int n, int a){
    if(n+1 == a){
        return;
    }
    for(int i =0 ;i<a;i++){
        cout << "*";
    }
    cout << endl;
    f(n, a+1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    f(n, 1);
    return 0;
}
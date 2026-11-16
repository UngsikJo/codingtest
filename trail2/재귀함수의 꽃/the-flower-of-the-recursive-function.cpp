#include <iostream>
using namespace std;

void f(int n){
    if(0 == n){
        return;
    }
    cout << n<<" ";
    f(n-1);
    cout << n<<" ";
}


int main() {
    // Please write your code here.
    int n;
    cin >> n;
    f(n);
    return 0;
}
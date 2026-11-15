#include <iostream>
using namespace std;

void f(int n){
    if(n == 0){
        cout << endl;
        return;
    }
    cout << n << " ";
    f(n-1);
}

void g(int n, int a){
    if(n+1 == a){
        cout << endl;
        return;
    }
    cout << a << " ";
    g(n, a+1);

}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    g(n, 1);
    f(n);
    return 0;
}
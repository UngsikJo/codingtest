#include <iostream>
using namespace std;
void f(int n){
    if(n == 0){
        return;
    }
    cout << "HelloWorld" << endl;
    f(n-1);
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    f(n);
    return 0;
}
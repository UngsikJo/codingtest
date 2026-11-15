#include <iostream>
using namespace std;

void print(int a, int b){
    int n = a;
    for(int i=1; i<b ;i++){
        a *= n;
    }
    cout << a;
}
int main() {
    // Please write your code here.
    int a, b;
    cin >> a>> b;
    print(a, b);
    return 0;
}
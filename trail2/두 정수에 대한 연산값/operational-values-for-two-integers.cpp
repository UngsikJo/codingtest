#include <iostream>
using namespace std;

int max(int &a, int &b){
    int max;
    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    return max;
}

void f(int &a, int &b){
    int max_a = max(a, b);
    if(max_a == a){
        a += 25;
        b *= 2;
    }
    else{
        a *= 2;
        b += 25;
    }
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    f(a, b);
    cout << a <<" "<< b;
    return 0;
}
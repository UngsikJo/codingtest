#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    int min;
    min = a;
    if(b <= min){
        min = b;
    }
    else if( c <= min){
        min = c;
    }

    if(min == a){
        cout << 1 << " ";
    }
    else{
        cout << 0 << " ";
    }

    if(a==b and b==c){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
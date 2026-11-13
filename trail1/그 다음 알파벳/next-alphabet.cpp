#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    cin >> a;
    a++;
    if(a == 'z'+1){
        a = 'a';
    }
    cout << a;
    return 0;
}
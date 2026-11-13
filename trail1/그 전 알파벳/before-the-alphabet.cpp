#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    cin >> a;
    a--;
    if(a =='a'-1){
        a = 'z';
    }
    cout << a;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b;
    cin >> a >> b;
    int dff = (int)a - (int)b;
    if(dff <= 0){
        dff = -dff;
    }

    cout << (int)a + (int)b << " " << dff;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    cin >> a;
    cin >> b;
    while(a.find(b) != -1){
        int idx = a.find(b);
        a.erase(idx, b.length());
    }

    cout << a;
    return 0;
}
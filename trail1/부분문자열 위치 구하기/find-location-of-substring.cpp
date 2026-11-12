#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    cin >> a;
    cin >> b;
    int idx = a.find(b);
    cout << idx;
    return 0;
}
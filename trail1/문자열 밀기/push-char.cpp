#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    string result;
    result = s.substr(1,s.length()-1) + s.substr(0, 1);
    cout << result;
    return 0;
}
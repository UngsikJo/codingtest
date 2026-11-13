#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    string b;
    string result;
    string r_result;
    cin >> a >> b;
    result = a + b;
    r_result = b + a;

    cout << stoi(result) + stoi(r_result);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, a_result;
    string b, b_result;
    cin >> a>> b;
    for(int i =0; i<a.size();i++){
        if(a[i] >= '0' and a[i] <= '9'){
            a_result += a[i];
        }
    }

    for(int i =0; i<b.size(); i++){
        if(b[i] >= '0' and b[i] <= '9'){
            b_result += b[i];
        }
    }

    cout << stoi(a_result) + stoi(b_result);
    return 0;
}
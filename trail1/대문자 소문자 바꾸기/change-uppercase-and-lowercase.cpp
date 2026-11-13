#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    for(int i =0; i<str.size(); i++){
        if(str[i] >= 'A' and str[i]<='Z'){
            str[i] = str[i] +32;
        }
        else if(str[i] >= 'a' and str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    cout << str;
    return 0;
}
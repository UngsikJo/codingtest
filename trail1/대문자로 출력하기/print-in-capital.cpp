#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;

    for(int i =0;i<str.size(); i++){
        if(str[i] <= 'Z' and str[i] >= 'A'){
            cout << str[i];
        }
        else if(str[i]<='z' and str[i] >= 'a'){
            cout << (char)((int)str[i] - 32);
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    string cmd;
    cin >> cmd;
    for(int i =0; i<cmd.length(); i++){
        if(cmd[i] == 'L'){
            a = a.substr(1, a.length()-1) + a.substr(0,1);
        }
        if(cmd[i] == 'R'){
            a = a.substr(a.length()-1,1) + a.substr(0,a.length()-1);
        }
    }
    cout << a;
    return 0;
}
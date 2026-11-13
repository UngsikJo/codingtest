#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string cmd;
    while(true){
        cin >> cmd;
        if(cmd == "END"){
            break;
        }
        else{
            for(int i = cmd.size()-1 ; i>=0 ;i--){
                cout << cmd[i];
            }
            cout << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int y;
    cin >> y;
    
    if(y%4 == 0){
        if(y%100 == 0 and y%400 != 0){
            cout << "false";
            return 0;
        }
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}
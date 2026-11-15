#include <iostream>
using namespace std;

void print(int a){
    if(a%4 ==0){
        if(a%100==0 and a%400 != 0){
            cout << "false";
        }
        else{
            cout << "true";
        }
    }
    else{
        cout << "false";
    }
}

int main() {
    // Please write your code here.
    int y;
    cin >> y;
    print(y);
    return 0;
}
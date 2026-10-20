#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    while(true){
        cin >> a;
        if(a<25){
            cout << "Higher" << endl;
        }
        else if(a>25){
            cout << "Lower" << endl;
        }
        else{
            cout << "Good";
            break;
        }
    }
    return 0;
}
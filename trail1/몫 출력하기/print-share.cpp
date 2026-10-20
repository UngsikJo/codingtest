#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int count =0 ;
    while(true){
        cin >> a;
        if(a%2 == 0){
            a /= 2;
            count++;
            cout << a << endl;
        }
        if(count == 3){
            break;
        }
    }
    return 0;
}
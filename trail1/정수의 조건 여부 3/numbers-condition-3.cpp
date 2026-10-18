#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    if(a%13 == 0 or a%19==0){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}
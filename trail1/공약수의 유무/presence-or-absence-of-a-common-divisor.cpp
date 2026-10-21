#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a>> b;
    int flag = 0;
    for(int i=a;i<=b;i++){
        if(1920%i == 0 and 2880%i==0){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
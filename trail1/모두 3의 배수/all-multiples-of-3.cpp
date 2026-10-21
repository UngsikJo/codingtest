#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int flag = 0;
    for(int i =1;i<=5;i++){
        cin >> a;
        if(a%3 !=0){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << 0;
    }
    else{
        cout << 1;
    }
    return 0;
}
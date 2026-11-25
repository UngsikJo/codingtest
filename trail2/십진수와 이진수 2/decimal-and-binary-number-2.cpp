#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string n;
    cin >> n;
    int num = 0;
    for(int i =0; i<n.size(); i++){
        if(n[i] == '1'){
            num = num*2+1;
        }
        else if(n[i] == '0'){
            num = num *2;
        }
    }
    num *= 17;
    int digits[20];
    int cnt =0;
    while(true){
        if(num < 2){
            digits[cnt++] = num;
            break;
        }
        digits[cnt++] = num%2;
        num /= 2;
    }

    for(int i =cnt-1; i>=0; i--){
        cout << digits[i];
    }

    return 0;
}
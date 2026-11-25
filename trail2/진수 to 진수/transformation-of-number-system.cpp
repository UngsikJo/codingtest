#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    string n;
    cin >> n;
    int num =0;
    for(int i =0; i<n.size(); i++){
        num = num * a + (n[i] - '0');
    }

    int digits[20];
    int cnt=0;
    while(true){
        if(num < b){
            digits[cnt++] = num;
            break;
        }
        digits[cnt++] = num%b;
        num /= b;
    }

    for(int i = cnt-1; i>=0; i--){
        cout << digits[i];
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt=0;
    cin >> n;
    while(n<=1000){
        if(n%2==0){
            n = 3*n +1;

        }else if(n%2 != 0){
            n = 2*n + 2;
    
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}
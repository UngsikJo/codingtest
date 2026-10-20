#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt =0;
    int i =1;
    while(true){
        n /= i;
        cnt++;
        if(n <= 1){
            break;
        }
        i++;
    }
    cout << cnt;
    return 0;
}
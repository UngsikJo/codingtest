#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int count =0;
    while(true){
        if(n==1){
            break;
        }
        else if(n%2 ==0){
            n /= 2;
            count++;
        }
        else if(n%2 != 0){
            n = 3 * n + 1;
            count++;
        }
    }
    cout << count;
    return 0;
}
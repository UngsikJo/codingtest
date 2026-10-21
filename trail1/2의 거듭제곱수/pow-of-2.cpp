#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int count=0;
    while(n!=1){
        n /= 2;
        count++;
    }
    cout << count;
    return 0;
}
#include <iostream>
using namespace std;

int sum(int a){
    int sum = 0;
    for(int i =1; i<=a; i++){
        sum += i;
    }
    return sum/10;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int result = sum(n);
    cout << result;
    return 0;
}
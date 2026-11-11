#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a[10];
    int sum =0;
    for(int i =0; i<10; i++){
        cin >> a[i];
        sum += a[i].length();
    }
    cout << sum;

    return 0;
}
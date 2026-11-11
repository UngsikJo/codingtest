#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string a[n];
    string result;
    for(int i =0; i<n; i++){
        cin >> a[i];
        result += a[i];
    }
    cout << result;
    return 0;
}
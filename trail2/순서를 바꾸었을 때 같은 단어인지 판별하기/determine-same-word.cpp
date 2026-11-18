#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a;
    cin >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a==b){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a%2 != 0 and a%3==0){
            cout << a << endl;
        }
    }
    return 0;
}
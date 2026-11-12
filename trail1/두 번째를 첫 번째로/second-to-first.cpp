#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    char tmp = a[0];
    char tmp2 = a[1];
    for(int i = 0; i< a.length(); i++){
        if(a[i] == tmp2){
            a[i] = tmp;
        }
    }

    cout << a;
    return 0;
}
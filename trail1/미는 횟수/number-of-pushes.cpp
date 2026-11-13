#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a;
    cin >> b;
    int count =0;
    while(a != b){
        if(count == a.length()){
            cout << -1;
            return 0;
        }
        a = a.substr(a.length()-1, 1) + a.substr(0,a.length()-1);
        count++;
    }
    cout << count;
    return 0;
}
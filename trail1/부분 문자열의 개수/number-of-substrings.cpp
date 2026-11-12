#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a;
    cin >> b;
    int count = 0;
    for(int i =0; i<a.length()-1 ;i++){
        if(a.substr(i,b.length()) == b){
            count++;
        }
    }
    cout << count;
    return 0;
}
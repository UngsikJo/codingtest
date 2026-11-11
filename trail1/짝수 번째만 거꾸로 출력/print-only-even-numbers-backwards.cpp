#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    string result;
    for(int i =0; i<a.length(); i++){
        if(i%2 != 0 and a[i] != ' '){
            result += a[i];
        }
    }
    for(int i = result.length()-1 ; i>=0; i--){
        cout << result[i];
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    getline(cin, str);
    char a;
    cin >> a;
    int count = 0;
    for(int i =0; i<str.length(); i++){
        if(str[i] == a){
            count++;
        }
    }
    cout << count;
    return 0;
}
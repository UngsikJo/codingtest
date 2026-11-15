#include <iostream>
using namespace std;

void pdr(string &str){
    bool flag = true;
    for(int i =0; i<str.size()/2; i++){
        if(str[i] != str[str.size() - 1- i]){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    pdr(str);
    return 0;
}
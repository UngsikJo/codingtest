#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str1;
    string str2;
    string total_str;
    getline(cin, str1);
    getline(cin, str2);
    int k =0;
    for(int i=0; i<str1.length() ;i++){
        if(str1[i] != ' '){
            total_str += str1[i];
            k++;
        }
    }
    for(int i=0; i<str2.length();i++){
        if(str2[i] != ' '){
            total_str += str2[i];
            k++;
        }
    }
    
    for(int i =0; i<total_str.length(); i++){
        cout << total_str[i];
    }



    return 0;
}
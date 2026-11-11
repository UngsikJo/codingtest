#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str1, str2, str3;
    cin >> str1;
    cin >> str2;
    cin >> str3;
    int max = str1.length();
    int min = str1.length();
    if(max < str2.length()){
        max = str2.length();
    }
    if(max < str3.length()){
        max = str3.length();
    }
    if(min > str2.length()){
        min = str2.length();
    }
    if(min > str3.length()){
        min = str3.length();
   }
    cout << max - min;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int sum =0;
    for(int i =0; i<str.size(); i++){
        if(str[i] >= '0' and str[i] <= '9'){
            sum += (int)str[i] - 48;
        }
    }
    cout << sum;
    return 0;
}
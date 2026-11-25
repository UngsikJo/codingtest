#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string binary;
    cin >> binary;
    int result =0;
    for(int i =0; i<binary.size(); i++){
        if(binary[i] == '1'){
            result = result * 2 + 1;
        }
        else if(binary[i] == '0'){
            result = result *2;
        }
    }

    cout << result;
    return 0;
}
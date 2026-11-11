#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a[5]={"apple", "banana", "grape", "blueberry", "orange"};

    char c;
    cin >> c;

    int count = 0;
    bool flag = false;
    for(int i =0; i<5; i++){
        flag = false;
        if(a[i][2] == c or a[i][3] == c){
            flag = true;
        }
        if(flag){
            cout << a[i] << endl;
            count++;
        }
    }

    cout << count;
    
    return 0;
}
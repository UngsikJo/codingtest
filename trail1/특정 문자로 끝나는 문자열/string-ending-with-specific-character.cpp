#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a[10];
    char c;
    for(int i =0; i<10; i++){
        cin >> a[i];
    }
    cin >> c;
    bool flag = false;
    for(int i =0; i<10; i++){
        if(a[i][a[i].length()-1] == c){
            cout << a[i] << endl;
            flag =true;
        }
    }
    if(!flag){
        cout << "None";
    }
    return 0;
}
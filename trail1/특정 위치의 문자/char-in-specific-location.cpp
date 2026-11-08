#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a[6];
    a[0] = 'L';
    a[1] = 'E';
    a[2] = 'B';
    a[3] = 'R';
    a[4] = 'O';
    a[5] = 'S';
    char tmp;
    cin >> tmp;
    for(int i =0; i<6; i++){
        if(tmp == a[i]){
            cout << i;
            break;
        }
        else if(tmp != a[i] and i == 5){
            cout << "None";
        }
    }
    return 0;
}
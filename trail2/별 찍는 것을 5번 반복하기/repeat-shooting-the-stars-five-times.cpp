#include <iostream>
using namespace std;

void printStar(){
    for(int i =0; i<5; i++){
        for(int j =0; j<10; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    printStar();
    return 0;
}
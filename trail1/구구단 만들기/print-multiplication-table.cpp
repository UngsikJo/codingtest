#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    for(int i =1; i<= 9; i++){
        for(int j = b; j>=a; j -= 2){
            if(j > a){
                cout << j << " * " << i <<" = " << i*j << " / ";
            }
            else if(j == a){
                cout << j << " * " << i <<" = " << i*j;
            }
        }
        cout << endl;
    }
    return 0;
}
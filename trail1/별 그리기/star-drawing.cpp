#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=1; i<= 2*n -1; i++){
        //공백
        int a = n-i;
        if(a < 0){
            a = -a;
        }
        for(int j = 1; j<= a; j++){
            cout << " ";
        }
        //별표시
        for(int j =1; j<=(2*n-1)-2*a; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1;i<=2*n-1;i++){
        int a;
        a = i - n;
        if(a < 0){
            a = -a;
        }
        //공백
        for(int j =1;j<=a;j++ ){
            cout << " ";
        }
        //별표시
        for(int j=1; j<= n-a; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
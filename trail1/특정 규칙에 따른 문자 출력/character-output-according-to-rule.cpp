#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=1; i<=2*n+1; i++){
        int a;
        int b;
        int c;
        if(i <= n){
            a = i;
            b = n - a;//앞 공백
        }
        else if(i > n){
            a = i - 2*(i-n);
            c = n - a; //뒷 공백
        }
        //앞공백
        for(int j=1; j<= b;j++ ){
            cout << "  ";
        }
        //@출력
        for(int j=1; j<= a; j++){
            cout << "@" << " ";
        }
        //뒷공백
        for(int j=1;j<=c; j++){
            cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
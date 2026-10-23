#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 1; i<=2*n-1;i++){
        int a = i - n;
        if(a<0){
            a = -a;
        }
        
        int b;
        if( i<= n){
            b = i-1;
        }
        else{
            b= i-(2*a +1);
        }
        for(int j =1; j<=b;j++){
            cout << "  ";
        }
        for(int j =1; j<= 2*a + 1; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =1; i<=2*n-1; i++){
        int a;
        if(n-i > 0){
            a = n-i+1;
        }
        else if(n-i == 0){
            a = 1;
        }
        else{
            a = i-n+1;
        }
        for(int j=1; j<=a; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
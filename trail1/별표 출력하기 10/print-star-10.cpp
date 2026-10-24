#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<=2*n-1;i++){
        int a;
        if(i%2 != 0){
            a = n-(i-1)/2;
        }
        else if(i%2==0){
            a = 1+(i/2);
        }
        for(int j=0; j<a; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
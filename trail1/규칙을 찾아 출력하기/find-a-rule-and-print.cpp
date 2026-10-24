#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =1; i<=n ; i++){
        for(int j=1; j<=n;j++){
            if(i==1 or i==n or j ==1 or j== n){
                cout << "* ";
            }
            else if(i>j){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
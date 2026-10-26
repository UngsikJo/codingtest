#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int k = 1;
    for(int i =n; i>=1;i--){
        for(int j =1; j<=i;j++){
            if(j<i){
                cout <<k<<" * "<<j<<" = "<<k*j<<" / ";
            }
            else if(j==i){
                cout <<k<<" * "<<j<<" = "<<k*j<<endl;
            }
            
        }
        k++;
    }
    return 0;
}
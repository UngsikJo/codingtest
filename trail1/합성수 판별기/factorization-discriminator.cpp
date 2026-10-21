#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int flag = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i ==0){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "C";
    }
    else{
        cout << "N";
    }
    return 0;
}
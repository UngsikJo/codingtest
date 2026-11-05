#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int sum=0;
    for(int i =0; i<10; i++){
        cin >> a[i];
        if(i==2 or i==4 or i==9){
            sum += a[i];
        }
    }
    cout <<sum;
    
    return 0;
}
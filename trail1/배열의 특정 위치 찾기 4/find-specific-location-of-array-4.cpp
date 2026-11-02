#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int sum = 0;
    int count =0;
    int b =0;
    for(int i =0; i<=9; i++){
        cin >> a[i];
        
        if(a[i]==0){
            break;
        }
        b++;
    }
    for(int j =0; j<= b-1; j++){
        if(a[j]%2==0){
            sum += a[j];
            count++;
        }
    }
    cout << count << " " << sum;
    return 0;
}
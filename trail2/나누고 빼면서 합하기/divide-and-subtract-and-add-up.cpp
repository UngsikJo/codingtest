#include <iostream>
using namespace std;

int m, n;


void f(int arr[]){
    int sum = 0;

    while(m != 1){
        sum += arr[m-1];
        if(m%2 != 0){
            m -= 1;
        }
        else{
            m /= 2;
        } 
    }
    sum += arr[0];
    cout << sum;
}

int main() {
    // Please write your code here.
    cin >> n >> m;
    int arr[n];
    for(int i =0 ; i<n;i++){
        cin >> arr[i];
    }
    f(arr);
    return 0;
}
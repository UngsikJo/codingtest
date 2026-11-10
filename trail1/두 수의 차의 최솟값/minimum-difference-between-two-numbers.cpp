#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n]= {0,};
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int total_min = arr[1]-arr[0];
    for(int i=1;i<n;i++){
        if(total_min > arr[i]-arr[i-1]){
            total_min = arr[i] - arr[i-1];
        }
    }
    cout << total_min;
    return 0;
}
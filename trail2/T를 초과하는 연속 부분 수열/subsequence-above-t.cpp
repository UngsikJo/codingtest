#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int T;
    cin >> n >> T;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    int count = 0;
    int max = 0;
    for(int i =0; i<n; i++){
        if(arr[i] > T){
            count++;
        }
        else{
            count = 0;
        }

        if(max < count){
            max = count;
        }
    }

    cout << max;
    return 0;
}
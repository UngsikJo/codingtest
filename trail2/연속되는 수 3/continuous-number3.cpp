#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    int count =1;
    int max = 1;
    for(int i =1; i<n ; i++){
        if(((arr[i] < 0) and (arr[i-1] <0)) or ((arr[i] >0) and (arr[i-1]>0))){
            count++;
        }
        else{
            count = 1;
        }
        if(count > max){
            max = count;
        }
    }
    cout << max;
    return 0;
}
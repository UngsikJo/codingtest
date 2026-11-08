#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    int count =0;
    int k=0;
    for(int i =0; i<n; i++){
        k++;
        if(a[i] == 2){
            count++;
        }
        if(count == 3){
            break;
        }
    }
    cout << k;
    return 0;
}
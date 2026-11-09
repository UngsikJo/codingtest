#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[100] = {0,};
    int k =0;
    for(int i =0; i<100; i++){
        cin >> a[i];
        k++;
        if(a[i]== 999 or a[i]==-999){
            break;
        }
    }
    int max = a[0];
    int min = a[0];
    for(int i =1; i<k-1; i++){
        if(max <= a[i]){
            max = a[i];
        }
        if(min >= a[i]){
            min = a[i];
        }
    }
    cout << max << " " << min;
    return 0;
}
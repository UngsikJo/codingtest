#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int min, max;
    int n;
    cin >> n;
    int total_max=0;
    int a[n] = {0,};
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    min = a[0];
    max = 0;
    for(int i =0; i<n;i++){
        if(min > a[i]){
            min = a[i];
            max = 0;
        }
        if(max < a[i]){
            max = a[i];
        }
        if(total_max < max - min){
            total_max = max - min;
        }
    }
    cout << total_max;
    return 0;
}
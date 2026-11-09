#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    for(int i=0;i<10;i++){
        cin >> a[i];
    }
    int under_500_max = 0;
    int over_500_min = 999;
    for(int i =0; i<10; i++){
        if(a[i] < 500 and under_500_max < a[i]){
            under_500_max = a[i];
        }
        if(a[i] > 500 and over_500_min > a[i]){
            over_500_min = a[i];
        }
    }
    
    cout << under_500_max << " " << over_500_min;
    return 0;
}
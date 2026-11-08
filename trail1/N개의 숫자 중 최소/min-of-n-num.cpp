#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n; i++){
        cin >> a[i];
    }
    int min = a[0];
    int min_count = 0;
    for(int i =0; i<n; i++){
        if(min > a[i]){
            min = a[i];
            min_count =0;
        }
        if(min == a[i]){
            min_count++;
        }
    }
    
    cout <<min <<" "<< min_count;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n>> k;
    int block[n] ={0};
    int a, b;
    for(int i = 0 ; i < k ; i++){
        cin >> a >> b;
        for(int j =a-1; j<= b-1; j++){
            block[j]++;
        }
    }
    
    int max = 0;
    for(int i =0; i<n; i++){
        if(block[i] > max){
            max = block[i];
        }
    }
    cout << max;
    return 0;
}
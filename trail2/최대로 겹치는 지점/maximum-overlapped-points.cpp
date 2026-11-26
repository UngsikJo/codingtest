#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int block[100] = {0,};
    int a, b;
    for(int i =0; i<n; i++){
        cin >> a >> b;
        for(int j=a-1; j<=b-1; j++){
            block[j]++;
        }
    }

    int max=0;
    for(int j=0; j<100; j++){
        if(max < block[j]){
            max = block[j];
        }
    }
    cout << max;
    return 0;
}
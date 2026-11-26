#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int offset = 100;
    int blocks[200] = {0,};

    cin >> n;
    int a, b;
    for(int i =0; i<n; i++){
        cin >> a >> b;
        for(int j = a-1; j<b-1; j++){
            blocks[j+offset]++;
        }
    }
    int max=0;
    for(int i =0; i<200; i++){
        if(blocks[i] > max){
            max = blocks[i];
        }
    }
    cout << max;
    return 0;
}
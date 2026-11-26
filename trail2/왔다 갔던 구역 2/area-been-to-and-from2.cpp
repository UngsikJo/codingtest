#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int block[2001]={0,};
    int crr = 1000;
    int dist;
    char a;
    for(int i =0; i<n; i++){
        cin >> dist >> a;
        if(a == 'R'){
            for(int j =0; j<=dist-1; j++){
                block[j+crr]++;
            }
            crr += dist;
        }
        if(a == 'L'){
            for(int j =0; j<=dist-1; j++){
                block[crr-j-1]++;
            }
            crr -= dist;
        }
    }

  
    int count = 0;
    for(int i =0; i<2001; i++){
        if(block[i] >= 2){
            count++;
        }
    }

    cout << count;
    return 0;
}
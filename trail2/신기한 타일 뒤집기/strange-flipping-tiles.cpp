#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tile[200001] = {0,};
    //0회색 , 1흰색, 2검은색
    int cur = 100000;

    int n;
    cin >> n;
    int x;
    char a;
    for(int i = 0; i<n ;i++){
        cin >> x >> a;
        if(a == 'R'){
            for(int j =0; j<x; j++){
                tile[cur+j] = 2;
            }
            cur += x-1;
        }
        if(a == 'L'){
            for(int j=0; j<x ;j++){
                tile[cur-j] = 1;
            }
            cur -= x-1;
        }
    }

    int white =0;
    int black = 0;
    for(int i =0; i< 200001; i++){
        if(tile[i] == 1){
            white++;
        }
        if(tile[i] == 2){
            black++;
        }
    }

    cout << white << " " << black;

    
    return 0;
}
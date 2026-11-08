#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    for(int i =0; i<10; i++){
        a[i] = 0;
    }
    int tmp;
    int tmp_2;
    while(true){
        cin >> tmp;
        if(tmp == 0){
            break;
        }
        tmp_2 = tmp/10;
        a[tmp_2-1]++;
    }    
    for(int i =9; i>=0; i--){
        cout << (i+1)*10 <<" - "<<a[i] << endl;
    }
    return 0;
}
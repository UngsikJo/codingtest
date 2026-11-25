#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int b;
    cin >> b;
    int result[20];
    int cnt =0;
    if(b == 4){
        while(true){
            if(n<4){
                result[cnt++] = n;
                break;
            }
            result[cnt++] = n%4;
            n /= 4;
        }
    }
    else if(b == 8){
        while(true){
            if(n <8){
                result[cnt++] = n;
                break;
            }
            result[cnt++] = n%8;
            n /= 8;
        }
    }

    for(int i = cnt-1; i>=0; i--){
        cout << result[i];
    }
    return 0;
}
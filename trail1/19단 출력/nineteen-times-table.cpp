#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;
    for(int i =1; i<=19; i++){
        for(int j =1; j<= 19; j++){
            if(j == 19){
                cout <<i<<" * "<<j<<" = "<<i*j;
            }
            else if(cnt != 1){
                cout <<i<<" * "<<j<<" = "<<i*j<< " / ";
                cnt++;
            }
            else if(cnt == 1){
                cnt = 0;
                cout <<i<<" * "<<j<<" = "<<i*j<<endl;
            }
        }
        cout << endl;
        cnt = 0;
    }
    return 0;
}
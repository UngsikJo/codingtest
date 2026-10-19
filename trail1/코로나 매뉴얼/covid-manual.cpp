#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a,b,c;
    int a_t, b_t, c_t;
    cin >> a >> a_t;
    cin >> b >> b_t;
    cin >> c >> c_t;

    int count = 0;

    if(a=='Y'){
        if(a_t >= 37){
            count++;
        }
    }
    if(b=='Y'){
        if(b_t >= 37){
            count++;
        }
    }
    if(c=='Y'){
        if(c_t >= 37){
            count++;
        }
    }
    

    if(count >= 2){
        cout << 'E';
    }
    else{
        cout << 'N';
    }
    return 0;
}
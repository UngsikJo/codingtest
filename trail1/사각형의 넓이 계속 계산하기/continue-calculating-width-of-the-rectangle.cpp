#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int w, h;
    char c;
    while(true){
        cin >> w >> h >> c;
        cout << w * h << endl;
        if(c=='C'){
            break;
        }
    }
   
    return 0;
}
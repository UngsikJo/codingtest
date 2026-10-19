#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;

    int max;


    if(a <= b){
        if(b >= c){
            max = b;
        }
        else{
            max = c;
        }
        
    }
    else{
        if(a >= c){
            max = a;
        }
        else{
            max = c;
        }
        
    }
    
   
    cout << max;
    return 0;
}
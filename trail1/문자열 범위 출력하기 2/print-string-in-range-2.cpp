#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    int v;
    cin >> a;
    cin >> v;
    if(v >= a.length()){
        for(int i =a.length()-1; i>=0; i--){
            cout << a[i];
        }
    }
    else{
        for(int i =a.length()-1 ; i >= a.length() - v ;i--){    
         cout << a[i];
        }
    }
    
    return 0;
}
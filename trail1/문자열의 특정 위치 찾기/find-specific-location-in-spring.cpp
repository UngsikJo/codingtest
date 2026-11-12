#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    char c;

    cin >> a >> c;
    int idx = a.find(c);
    
    if(idx == -1){
        cout << "No";
    }
    else{
        cout << idx;
    }
    return 0;
}
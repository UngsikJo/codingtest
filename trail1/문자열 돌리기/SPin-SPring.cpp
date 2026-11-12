#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;
    string last = s;
    cout << s << endl;
    for(int i =0; i<s.length()-1;i++){
        
        s = s.substr(s.length()-1, 1)+ s.substr(0, s.length()-1);
        cout << s << endl;
    }
    cout << last << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int q;

    cin >> s >> q;
    int ch;
    for(int i =0; i<q; i++){
        cin >> ch;
        if(ch == 1){
            s = s.substr(1,s.length()-1) + s.substr(0,1);
            cout << s << endl;
        }
        if(ch == 2){
            s = s.substr(s.length()-1,1) + s.substr(0,s.length()-1);
            cout << s << endl;
        }
        if(ch == 3){
            string result;
            for(int j =s.length()-1; j>=0; j--){
                result += s.substr(j,1);
            }
            s = result;
            cout << s << endl;
        }

    }

    return 0;
}
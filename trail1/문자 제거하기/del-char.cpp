#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int a;
    cin >> s;
   
    int tmp;
    while(true){
        if(s.length() == 1){
            break;
        }
        cin >> tmp;
        if(tmp >= s.length()){
            s.erase(s.length()-1, 1);
            cout << s << endl;
        }
        else{
            s.erase(tmp, 1);
            cout << s << endl;
        }
    }
    
    return 0;
}
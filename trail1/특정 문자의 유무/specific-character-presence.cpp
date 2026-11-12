#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    bool flag_ee = false;
    bool flag_ab = false;
    for(int i =0; i < a.length()-1 ; i++){
        if(a.substr(i, 2) == "ee"){
            flag_ee = true;
        }
        if(a.substr(i, 2) == "ab"){
            flag_ab = true;
        }
    }

    if(flag_ee){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << " ";
    if(flag_ab){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
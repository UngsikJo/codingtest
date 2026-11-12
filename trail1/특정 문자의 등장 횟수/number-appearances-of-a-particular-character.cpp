#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    int count_ee = 0;
    int count_eb = 0;

    for(int i =0; i<a.length()-1 ; i++){
        if(a.substr(i,2) == "eb"){
            count_eb++;
        }
        if(a.substr(i,2)== "ee"){
            count_ee++;
        }
    }

    cout << count_ee << " " << count_eb;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int age;
    int sex;

    cin >> sex;
    cin >> age;

    if(sex  == 0){
        if(age >= 19){
            cout << "MAN";
        }
        else{
            cout << "BOY";
        }
    }
    else if(sex == 1){
        if(age >= 19){
            cout << "WOMAN";
        }
        else{
            cout << "GIRL";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

void print(int a, int b){
    if(a>=1 and a<=7){
        if(a%2 == 0){
            if(a == 2){
                if(b <= 28){
                    cout << "Yes";
                }
                else{
                    cout << "No";
                }
            }
            else{
                if(b <= 30){
                    cout << "Yes";
                }
                else{
                    cout << "No";
                }
            }
        }
        else if(a%2 != 0){
            if(b <= 31){
                cout << "Yes";
            }
            else{
                cout << "No";
            }
        }
    }
    else if(a>=8 and a<=12){
        if(a%2 == 0){
            if(b <= 31){
                cout << "Yes";
            }
            else{
                cout << "No";
            }
        }
        else if(a%2 != 0){
            if(b <= 30){
                cout << "Yes";
            }
            else{
                cout << "No";
            }
        }
    }
    else{
        cout << "No";
    }
}

int main() {
    // Please write your code here.
    int m, d;
    cin >>m >> d;
    print(m, d);
    return 0;
}
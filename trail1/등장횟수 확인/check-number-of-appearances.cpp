#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int count =0;
    for(int i =0;i<5;i++){
        cin >> a;
        if(a%2 ==0){
            count++;
        }
    }
    cout << count;
    return 0;
}
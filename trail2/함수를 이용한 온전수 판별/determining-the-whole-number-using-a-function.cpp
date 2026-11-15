#include <iostream>
using namespace std;

void print(int a, int b){
    int count =0;
    for(int i=a; i<=b; i++){
        if(i%2 ==0){
            continue;
        }
        else if(i%10 == 5){
            continue;
        }
        else if(i%3 ==0 and i%9 != 0){
            continue;
        }
        count++;
    }
    cout << count;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    print(a, b);
    return 0;
}
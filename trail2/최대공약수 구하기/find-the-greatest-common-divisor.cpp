#include <iostream>
using namespace std;

void print(int a, int b){
    int result;
    for(int i =1; i<=100; i++){
        if(a%i == 0 and b%i==0){
            result = i;
        }
    }
    cout << result;
}

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    print(n ,m);
    return 0;
}
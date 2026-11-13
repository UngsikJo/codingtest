#include <iostream>
using namespace std;

void print(int a, int b){
    int k =1;
    while(true){
        if(k%a == 0 and k%b == 0){
            cout << k;
            break;
        }
        k++;
    }
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    print(n,m);
    return 0;
}
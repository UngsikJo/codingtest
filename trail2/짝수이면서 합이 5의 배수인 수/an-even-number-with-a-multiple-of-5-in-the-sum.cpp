#include <iostream>
using namespace std;

void print(int a){
    int ten = a/10;
    int one = a%10;
    int result = ten + one;
    if(a%2 ==0 and result%5 ==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    print(n);
    return 0;
}
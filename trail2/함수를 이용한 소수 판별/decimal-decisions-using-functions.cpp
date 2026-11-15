#include <iostream>
using namespace std;

void print_sum(int a, int b){
    int sum=0;
    for(int i = a; i<=b; i++){
        int count = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count == 2){
            sum += i;
        }
    }
    cout << sum;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    print_sum(a, b);
    return 0;
}
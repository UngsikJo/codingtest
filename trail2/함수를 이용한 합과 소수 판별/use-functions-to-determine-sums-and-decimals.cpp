#include <iostream>
using namespace std;

void print(int a, int b){
    int total_count =0;
    for(int i =a;i<=b;i++){
        int ten = i/10;
        int one = i%10;
        int sum = ten + one;
        int count = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(sum%2==0 and count == 2){
            total_count++;
        }
    }

    cout << total_count;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    print(a, b);
    return 0;
}
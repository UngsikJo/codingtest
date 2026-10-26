#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i =2; i<=n;i++){
        //소수 검사
        int count_a = 0;
        for(int j=1; j<=i;j++){
            if(i%j == 0){
                count_a++;
            }
        }
        if(count_a == 2){
            cout << i << " ";
        }
    }
    return 0;
}
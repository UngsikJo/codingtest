#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin >> a >> b;
    int a_2[10] = {0,};
    int tmp;
    while(true){
        tmp = a%b;
        a_2[tmp]++;
        a = a/b;
        if(a <= 1){
            break;
        }
    }
    int sum = 0;
    for(int i = 0; i<10; i++){
        sum += (a_2[i]*a_2[i]);
    }
    cout << sum;
    return 0;
}
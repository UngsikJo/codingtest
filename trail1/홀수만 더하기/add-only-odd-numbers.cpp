#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int sum=0;
    int a;
    for(int i=1; i<=n ; i++){
        cin >> a;
        if(a%2 != 0 and a%3 ==0){
            sum += a;
        }
    }
    cout << sum;
    return 0;
}
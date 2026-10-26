#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a,b;
    for(int i =1; i<=n;i++){
        int sum = 0;
        cin >> a >> b;
        for(int i =a; i<=b;i++){
            if(i%2==0){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}
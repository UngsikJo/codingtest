#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a,b;
    for(int i =1; i<=n;i++){
        cin >> a >> b;
        int result =1;
        for(int j=a; j<=b;j++){
            result *= j;
        }
        cout << result << endl;
        
        
    }
    return 0;
}
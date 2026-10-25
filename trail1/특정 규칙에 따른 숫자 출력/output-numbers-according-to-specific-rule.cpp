#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    for(int i =n; i >=1; i--){
        for(int j =1; j<= n-i; j++){
            cout << "  ";
        }
        for(int j =1; j<=i; j++){
            cnt++;
            if(cnt > 9){
                cnt = 1;
            }
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}
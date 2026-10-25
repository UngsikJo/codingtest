#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cnt++;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}
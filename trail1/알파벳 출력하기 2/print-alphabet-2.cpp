#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int k =1;
    int cnt =0;
    for(int i = n; i >=1 ;i--){
        for(int j =2; j<=k;j++){
            cout << "  ";
        }
        for(int j=1;j<=i;j++){
            if(cnt > 25){
                cnt = 0;
            }
            cout << (char)(65+cnt) <<" ";
            cnt++;
        }
        cout << endl;
        k++;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt = 0;
    int minus_cnt = 0;
    for(int i =1; i<=n;i++){
        if(i%2 == 0){
            cnt += n;
            for(int j =1; j<=n ;j++){
                cout << cnt << " ";
                cnt--;
                minus_cnt++;
            }
        }
        else{
            cnt += minus_cnt;
            for(int j =1; j<=n ;j++){
                cnt++;
                cout << cnt << " ";
            }
            minus_cnt = 0;
        }
        
        cout << endl;
    }
    return 0;
}
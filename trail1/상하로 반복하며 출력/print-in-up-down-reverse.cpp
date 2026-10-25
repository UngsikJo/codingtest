#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int b = 1;
    for(int i =1; i<=n;i++){ // 4: 3 1 1 3, 5: 4 2 0 2 4
        int a = n-b;
        b += 2;
        for(int j =1; j<=n; j++){
            if(i%2 != 0){
                if(j%2 !=0){
                    cout << i;
                }
                else if(j%2 ==0){
                    cout << i+a;
                }
            }else if(i%2 ==0){
                if(j%2 !=0){
                    cout << i;
                }
                else if(j%2 ==0){
                    cout << i+a;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
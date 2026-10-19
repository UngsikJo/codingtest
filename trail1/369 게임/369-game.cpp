#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = 1 ; i<=n ; i++){
        int one = i%10;
        int ten = i/10%10;
        if(one != 0 and ((one % 3 == 0) or (one % 6 == 0 )or (one %9 == 0))){
            cout << 0 << " ";
        }
        else if(ten != 0 and ((ten % 3 == 0) or (ten % 6 == 0 )or (ten %9 == 0))){
            cout << 0 << " ";
        }
        else if(i % 3== 0){
            cout << 0 << " ";
        }
        else{
            cout << i << " ";
        }
        
    }
    return 0;
}
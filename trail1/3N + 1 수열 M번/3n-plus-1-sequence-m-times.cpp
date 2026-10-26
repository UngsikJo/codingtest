#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int m;
    cin >> m;
    for(int i =1; i<=m;i++){
        cin >> n;
        int count = 0;
        while(true){
            if(n==1){
                break;
            }
            if(n%2 != 0){
                n = n*3+1;
                count++;
            }
            else if(n%2 == 0){
                n = n/2;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
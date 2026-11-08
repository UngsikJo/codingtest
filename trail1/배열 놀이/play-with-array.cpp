#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, q;
    cin >> n >> q;

    int a_n[n];

    for(int i =0; i<n; i++){
        cin >> a_n[i];
    }

    int num;
    int first, second;
    for(int i =0; i<q; i++){
        cin >> num;
        if(num == 1){
            cin >> first;
            cout << a_n[first-1] << endl;
        }
        else if(num == 2){
            cin >> first;
            for(int j=0; j<n; j++){
                if(a_n[j] == first){
                    cout << j+1 << endl;
                    break;
                }
                else if(j == n-1){
                    cout << 0 << endl;
                }
            }
        }
        else if(num == 3){
            cin >> first >> second;
            for(int j = first-1; j< second; j++){
                cout << a_n[j] << " ";
            }
            cout << endl;
        }
    }
   
    return 0;
}
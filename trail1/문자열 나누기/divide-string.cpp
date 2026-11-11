#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string a[n];
    string result;
    for(int i =0; i<n; i++){
        cin >> a[i];
        result += a[i];
    }

    for(int i =0; i<result.length(); i++){
        cout << result[i];
        if((i+1)%5==0){
            cout << endl;
        }
    }
    return 0;
}
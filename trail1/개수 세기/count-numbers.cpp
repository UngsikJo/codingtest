#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin >> n >> m;
    int a[n];
    int count =0;
    for(int i =0; i<n; i++){
        cin >> a[i];
        if(a[i] == m){
            count++;
        }
    }
    cout << count;
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n);

    bool flag = true;
    for(int i =0; i<n ;i++){
        if(a[i] != b[i]){
            flag = false;
        }
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(i%2 == 0){
            sort(a, a+i+1);
            int mid = i/2;
            cout << a[mid] << " ";
        }
    }

    return 0;
}
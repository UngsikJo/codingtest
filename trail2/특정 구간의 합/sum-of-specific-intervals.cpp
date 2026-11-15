#include <iostream>
using namespace std;

int n, m;
int a[100];

int main() {
    // Please write your code here.
    cin >> n >> m;
    for(int i =0; i<n;i++){
        cin >> a[i];
    }
    int a1, a2;
    for(int i =0; i<m; i++){
        cin >> a1 >> a2;
        int sum = 0;
        for(int j = a1-1; j<a2; j++){
            sum += a[j];
        }
        cout << sum << endl;
    }
    return 0;
}
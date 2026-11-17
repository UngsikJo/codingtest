/*#include <iostream>
using namespace std;

int f(int n, int a[], int m){
    if(m == n-1){
        for(int i = 1; i<= a[m-1]; i++){
            if((a[m]*i) % a[m-1] == 0){
                return a[m]*i;
                break;
            }
        }
    }
    else{
        for(int i = 1; i<= a[m-1]; i++){
            if((a[m]*i) % a[m-1] == 0){
                a[m] = a[m]*i;
                return f(n, a, m+1);
                break;
            }
        }
    }
    
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n];
    for(int i =0; i<n ;i++){
        cin >> a[i];
    }
    cout << f(n, a, 1);
    return 0;
}*/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

long long f(const vector<long long>& a, int n, int m, long long current) {
    if (m == n) {
        return current;
    }

    long long next = current / gcd(current, a[m]) * a[m];
    return f(a, n, m + 1, next);
}

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << f(a, n, 1, a[0]) << '\n';
    return 0;
}
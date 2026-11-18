#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    string t;
    cin >> n >> k >> t;
    string a[n];
    string b[n];
    int tmp = 0;
    for(int i =0; i<n; i++){
        cin >> a[i];
        bool flag = true;
        for(int j=0; j<t.size(); j++){
            if(a[i][j] != t[j]){
                flag = false;
            }
        }
        if(flag){
            b[tmp] += a[i];
            tmp++;
        }
    }

    sort(b, b+tmp);
    
    cout << b[k-1];
    

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string a[n];
    int sum = 0;
    int count =0;
    for(int i =0; i<n; i++){
        cin >> a[i];
        sum += a[i].length();
        if(a[i][0] == 'a'){
            count++;
        }
    }
    cout << sum << " " << count;

    return 0;
}
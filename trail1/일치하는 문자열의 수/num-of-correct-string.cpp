#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    string A;
    cin >> n >> A;
    int count =0;
    string tmp;
    for(int i =0; i<n; i++){
        cin >> tmp;
        if(tmp == A)
            count++;
    }
    cout << count;
    return 0;
}
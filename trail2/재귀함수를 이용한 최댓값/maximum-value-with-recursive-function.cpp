#include <iostream>
using namespace std;

int f(int n, int a[], int max){
    if(n == 0){
        return max;
    }
    if(a[n-1] < max){
        return f(n-1, a, max);
    }
    else{
        max = a[n-1];
    }
    return f(n-1, a, max);

}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    int max = a[0];
    cout << f(n, a, max);
    return 0;
}
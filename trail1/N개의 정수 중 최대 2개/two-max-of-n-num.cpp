#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n] = {0,};
    for(int i=0;i<n; i++){
        cin >> a[i];
    }
    //내림차순 정렬
    for(int i =0; i<n; i++){
        for(int j = i-1;j>=0;j--){
            int tmp;
            if(a[j] < a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    cout << a[0] << " "<<a[1];

    return 0;
}
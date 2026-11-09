#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n] = {0,};
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int location[1000] = {0,};
    int max = 0;
    for(int i =0; i<n;i++){
        //최댓값 저장
        if(max < a[i]){
            max = a[i];
            location[i+1] = 1; //위치 정보 저장
        }
    }
    for(int i = 999; i>=0; i--){
        if(location[i] == 1){
             cout << i << " ";
        }
    }

    return 0;
}
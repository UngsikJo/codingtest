#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[n] ={0,};
    for(int i =0; i<n ;i++){
        cin >> a[i];
    }
    int st[1000] ={0,};
    for(int i=0;i<n;i++){
        st[a[i]]++;
    }
    int max = 0;
    bool flag=true;
    for(int i=0; i<n;i++){
        if(st[a[i]] == 1 and max <= a[i]){
            max = a[i];
            flag =false;
        }
    }
    if(!flag){
        cout << max;
    }else{
        cout << -1;
    }
    
    return 0;
}
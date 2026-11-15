#include <iostream>
using namespace std;

void check(string a, int n){
    int count =0;
    for(int i =0; i<n; i++){
        int flag = true;
        for(int j =i+1; j <n; j++){
            if(a[j] != a[i]){
                flag = false;
            }
        }
        if(!flag){
            count++;
        }
    }
    
    if(count >= 2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    // Please write your code here.
    string a;
    cin >> a;
    check(a, a.size());
    return 0;
}
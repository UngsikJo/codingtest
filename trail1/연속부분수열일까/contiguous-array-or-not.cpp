#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int a_arr[a] = {0,};
    int b_arr[b] = {0,}; 
    for(int i =0;i<a;i++){
        cin >> a_arr[i];
    }
    for(int i=0;i<b;i++){
        cin >> b_arr[i];
    }
    int flag=1;
    bool found = false;
    for(int i =0; i<=a-b; i++){
        flag = 1;
        for(int j =0; j<b; j++){
            if(a_arr[i+j] != b_arr[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            found = true;
        }
            
    }
    if(found){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
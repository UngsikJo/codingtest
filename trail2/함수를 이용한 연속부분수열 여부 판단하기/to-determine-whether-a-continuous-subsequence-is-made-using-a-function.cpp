#include <iostream>
using namespace std;

void print(int a[],int a_size, int b[], int b_size){
    bool flag;
    for(int i =0; i< a_size - b_size+1; i++){
        flag = true;
        for(int j =0; j < b_size; j++){
            if(a[i+j] != b[j]){
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    // Please write your code here.
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1];
    for(int i =0; i<n1; i++){
        cin >> a[i];
    }
    int b[n2];
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }
    print(a,n1, b, n2);
    return 0;
}
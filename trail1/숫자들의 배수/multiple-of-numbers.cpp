#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[100];
    int count =0;
    int i = 0;
    while(true){
        a[i] = n *(i+1);
        if(a[i] % 5==0){
            count++;
        }
        cout << a[i] << " ";
        if(count == 2){
            break;
        }
        i++;
    }
    return 0;
}
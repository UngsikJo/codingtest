#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int count = 0;
    for(int i =1; i<= n; i++){
        if(i%2 ==0 or i%3==0 or i%5==0){
            continue;
        }
        count++;
    }
    cout << count;
    return 0;
}
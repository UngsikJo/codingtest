#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int count =0;
    int start, end;
    cin >> start >> end;
    for(int i =start; i<=end; i++){
        int sum =0;
        for(int j =1; j< i ; j++){
            if(i%j == 0){
                sum += j;
            }
        }
        if(sum == i){
            count++;
        }
    }
    cout << count;
    return 0;
}
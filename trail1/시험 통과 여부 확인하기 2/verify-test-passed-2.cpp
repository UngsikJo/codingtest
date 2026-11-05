#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int a[4];
    int sum =0;
    int avg;
    int count =0;
    for(int i =0; i<n; i++){
        sum = 0;
        for(int j =0; j<4;j++){
            cin >> a[i];
            sum += a[i];
        }
        avg = sum/4;
        if(avg >= 60){
            cout << "pass" << endl;
            count++;
        }
        else{
            cout << "fail" << endl;
        }
    }
    cout << count;
    return 0;
}
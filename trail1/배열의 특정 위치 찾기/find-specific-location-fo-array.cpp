#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10];
    int sum=0;
    int sum_3=0;
    double avg;
    int count=0;
    for(int i =0; i<10; i++){
        cin >> a[i];
        if((i+1)%2==0){
            sum += a[i];
        }
        if((i+1)%3 ==0){
            sum_3 += a[i];
            count++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " ";
    avg = (double)(sum_3)/(double)(count);
    cout << avg;
    return 0;
}
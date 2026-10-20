#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int sum =0;
    int count = 0;
    for(int i =a ; i<=b;i++){
        if(i%5 == 0 or i%7==0){
            sum += i;
            count++;
        }
    }
    cout << fixed;
    cout.precision(1);
    double avg = (double)(sum)/(double)(count);
    cout << sum << " " << avg ;
    return 0;
}
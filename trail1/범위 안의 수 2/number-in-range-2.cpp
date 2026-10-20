#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, sum=0;
    int count =0;
    double avg;
    for(int i =1; i<=10; i++){
        cin >> a;
        if(a>=0 and a<=200){
            sum += a;
            count++;
        }
    }
    avg = (double)(sum)/(double)(count);
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}
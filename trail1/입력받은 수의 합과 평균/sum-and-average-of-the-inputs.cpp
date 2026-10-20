#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int a, sum = 0, count =0;
    double avg;
    for(int i=1; i<=n;i++){
        cin >> a;
        sum += a;
        count++;
    }
    cout << fixed;
    cout.precision(1);
    avg = (double)(sum)/(double)(count);
    cout << sum << " " << avg;
    return 0;
}
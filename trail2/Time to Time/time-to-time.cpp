#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >>  c >> d;
    int total_min = 0;
    while(true){
        if(a==c and b==d){
            break;
        }
        total_min++;
        b++;
        if(b == 60){
            a++;
            b=0;
        }
    }
    cout << total_min;
    return 0;
}
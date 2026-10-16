#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h,w;
    cin >> h >> w;
    double b = (double)(10000*w) / (double)(h*h);
    if(b>=25){
        cout << (int)(b) << endl;
        cout << "Obesity";
    }
    else{
        cout << (int)(b);
    }
    return 0;
}
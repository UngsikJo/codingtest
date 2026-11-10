#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[2][4];
    double c_sum =0;
    double r_sum =0;
    double total_sum =0;
    cout << fixed;
    cout.precision(1);
    for(int i=0; i<2; i++){
        c_sum = 0;
        for(int j=0;j<4; j++){
            cin >> a[i][j];
            c_sum += a[i][j]; 
        }
        cout << (double)(c_sum/4.0) << " ";
    }
    cout << endl;
    for(int i = 0; i<4; i++){
        r_sum = 0;
        for(int j=0; j<2; j++){
            r_sum += a[j][i];
        }
        cout << (double)(r_sum/2.0) << " ";
    }
    cout << endl;
    for(int i=0; i<2; i++){
        for(int j=0;j<4; j++){
            total_sum += a[i][j];
        }
    }
    cout << (double)(total_sum/8.0);

    return 0;
}
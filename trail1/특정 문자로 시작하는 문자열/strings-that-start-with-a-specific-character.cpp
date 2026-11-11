#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string a[n];
    char c;
    for(int i =0 ;i<n; i++){
        cin >> a[i];
    }
    cin >> c;
    double sum = 0;
    int count =0;
    for(int i =0; i<n; i++){
        if(a[i][0] == c){
            sum += a[i].length();
            count++;
        }
    }
    double avg = sum/count;
    cout << fixed;
    cout.precision(2);
    cout << count << " " << avg;
    return 0;
}
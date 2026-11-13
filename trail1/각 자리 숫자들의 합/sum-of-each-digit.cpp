#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string n;
    cin >> n;
    int sum =0;
    for(int i=0; i<n.size();i++){
        sum += (int)(n[i]) -48;
    }
    cout <<sum;
    return 0;
}
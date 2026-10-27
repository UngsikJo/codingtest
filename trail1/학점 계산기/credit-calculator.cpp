#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    double score[4];
    double sum = 0;
    for(int i =0; i< n; i++){
        cin >> score[i];
        sum += score[i];
    }
    double avg = sum/n;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    if(avg >= 4.0){
        cout << "Perfect";
    }
    else if(avg >= 3.0){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }
    return 0;
}
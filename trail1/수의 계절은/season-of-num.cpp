#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int month;
    cin >> month;

    if(month >= 3 and month <= 5){
        cout << "Spring";
    }
    else if(month >= 6 and month <= 8){
        cout << "Summer";
    }
    else if(month >= 9 and month <= 11){
        cout << "Fall";
    }
    else if(month == 12 or (month <= 2 and month >= 1)){
        cout << "Winter";
    }
    return 0;
}
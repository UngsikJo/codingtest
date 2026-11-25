#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string a;
    cin >> a;
    
    /*테스트
    m1 = 2;
    m2 = 4;
    d2 = 8;
    */

    int total_day = 0;
    if(m1 == m2){
        total_day = d2 - d1 + 1;
    }
    else{
        total_day += day[m1-1] - d1 + 1;
        for(int i = m1; i < m2-1; i++){
            total_day += day[i];
        }

        total_day += d2;
    }


    int result = total_day/7;
    for(int i =0; i<total_day%7; i++){
        if(week[i] == a){
            result++;
        }
    }
    cout << result;
    return 0;
}
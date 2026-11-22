#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int mon[12] = {31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31};

    // 같은 달인 경우
    if(m1 == m2){
        cout << d2 - d1 + 1;
        return 0;
    }

    int total_day = 0;

    // 시작 월의 남은 일수
    total_day += mon[m1-1] - d1 + 1;

    // 중간에 포함된 월의 일수
    for(int i = m1+1; i < m2; i++){
        total_day += mon[i-1];
    }

    // 종료 월의 일수
    total_day += d2;

    cout << total_day;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_age;
    char a_sex;
    int b_age;
    char b_sex;

    cin >> a_age >> a_sex;
    cin >> b_age >> b_sex;

    if((a_sex == 'M' and a_age >= 19) or (b_sex == 'M' and b_age >= 19)){
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
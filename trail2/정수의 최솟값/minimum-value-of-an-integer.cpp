#include <iostream>
using namespace std;

void min_print(int x, int y, int z){
    int min = x;
    if(min > y){
        min = y;
    }
    if(min > z){
        min = z;
    }

    cout << min;
}

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a>>b>>c;
    min_print(a,b,c);
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void count_3(int a, int b){
    int count =0;
    bool flag = false;
    for(int i =a; i<=b; i++){
        flag = false;
        string result = to_string(i);
        for(int j=0; j< result.size(); j++){
            if(result[j] == '3' or result[j] == '6' or result[j] == '9'){
                flag = true;
            }
        }
        if(i%3==0 or flag){
            count++;
        }
    }
    cout << count;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a>> b;
    count_3(a, b);
    return 0;
}
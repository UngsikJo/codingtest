#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a>> b;
    int count =0;

    int sum = a+b;
    string result = to_string(sum);
    for(int i =0; i<result.size(); i++){
        if(result[i] == '1'){
            count++;
        }
    }
    cout << count;
    return 0;
}
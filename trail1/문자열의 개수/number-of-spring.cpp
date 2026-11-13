#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string tmp;
    int count =0;
    string result[200];
    while(true){
        cin >> tmp;
        if(tmp[0] == '0'){
            break;
        }
        result[count] += tmp;
        count++;
    }
    cout << count << endl;
    for(int i =0; i<200; i++){
        if(i%2 ==0){
            cout << result[i] << endl;
        }
    }

    return 0;
}
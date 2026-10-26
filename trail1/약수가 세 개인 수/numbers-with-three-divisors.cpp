#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int start, end;
    cin >> start >> end;
    int count_b =0;
    for(int i= start; i<= end; i++){
        int count_a =0;
        for(int j=1; j<= i; j++){
            if(i%j ==0){
                count_a++;
            }
        }
        if(count_a == 3){
            count_b++;
        }
    }
    cout << count_b;
    return 0;
}
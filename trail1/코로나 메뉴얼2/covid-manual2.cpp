#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char flag;
    int tamp;
    int a[4] = {0,};
    for(int i =0; i<3; i++){
        cin >> flag >> tamp;
        if(tamp >= 37){
            if(flag == 'Y'){
                a[0]++;
            }
            else if(flag == 'N'){
                a[1]++;
            }
        }
        else if(tamp < 37){
            if(flag == 'Y'){
                a[2]++;
            }
            else if(flag == 'N'){
                a[3]++;
            }
        }
    }

    for(int i =0; i<4; i++){
        cout << a[i] << " ";
    }
    if(a[0] >= 2){
        cout << "E";
    }
    return 0;
}
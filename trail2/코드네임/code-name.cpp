#include <iostream>

#define MAX_N 5

using namespace std;

class User {
public:
    char code_name;
    int score;
};

User users[MAX_N];

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> users[i].code_name >> users[i].score;
    }

    int min = users[0].score;
    int min_idx;
    for(int i =0; i< MAX_N; i++){
        if(min >= users[i].score){
            min = users[i].score;
            min_idx = i;
        }
    }
    cout << users[min_idx].code_name << " " <<users[min_idx].score;

    // Please write your code here.

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int q;
    cin >> s >> q;
    int choice, idx_1, idx_2;
    char c_1, c_2;
    for(int i =0; i<q; i++){
        cin >> choice;
        if(choice == 1){
            cin >> idx_1 >> idx_2;
            char tmp = s[idx_1-1];
            s[idx_1-1] = s[idx_2-1];
            s[idx_2-1] = tmp;

            cout << s << endl;
        }
        if(choice == 2){
            cin >> c_1 >> c_2;
            for(int j =0; j < s.length(); j++){
                if(s[j] == c_1){
                    s[j] = c_2;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
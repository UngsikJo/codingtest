#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class result{
    public:
        string a;
        int lv;

        result(string a = "codetree", int lv = 10){
            this->a = a;
            this->lv = lv;
        }
};

int main() {
    cin >> user2_id >> user2_level;
    result r1 = result();
    cout << "user " << r1.a << " lv " <<r1.lv << endl;
    r1.a = user2_id;
    r1.lv = user2_level;
    cout << "user " << r1.a << " lv " <<r1.lv << endl;
    // Please write your code here.

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class total{
    public:
        string a;
        char b;
        int c;

        total(string a, char b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;
    total t = total(secret_code, meeting_point, time);


    cout << "secret code : " << t.a << endl;
    cout << "meeting point : " << t.b << endl;
    cout << "time : " << t.c << endl;

    // Please write your code here.

    return 0;
}
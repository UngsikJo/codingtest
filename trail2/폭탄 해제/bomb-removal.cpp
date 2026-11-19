#include <iostream>
using namespace std;


class bomb_info{
    public:
        string a;
        char b;
        int c;

        bomb_info(string a, char b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};

int main() {
    // Please write your code here.
    string code;
    char rgb;
    int second;
    cin >> code >> rgb >> second;
    bomb_info result = bomb_info(code , rgb, second);
    cout << "code : " << result.a << endl;
    cout << "color : " << result.b << endl;
    cout << "second : " << result.c << endl;
    return 0;
}
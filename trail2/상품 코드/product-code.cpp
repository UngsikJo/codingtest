#include <iostream>
using namespace std;

class Product{
    public:
        string name;
        int code;

        Product(string name = "codetree" , int code = 50){
            this->name = name;
            this->code = code;
        }
};

int main() {
    // Please write your code here.
    string input_name;
    int input_code2;
    cin >> input_name >> input_code2;
    Product P1 = Product();
    cout << "product " << P1.code << " is " << P1.name << endl;
    Product P2 = Product(input_name, input_code2);
    cout << "product " << P2.code << " is " << P2.name << endl;
    return 0;
}
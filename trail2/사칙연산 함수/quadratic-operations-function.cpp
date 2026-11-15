#include <iostream>
#include <string>
using namespace std;

void add(int a, int b){
    cout << a << " + " << b << " = " << a+b;
}

void dif(int a, int b){
    cout << a << " - " << b << " = " << a-b;
}

void div_a(int a, int b){
    cout << a << " / " << b << " = " << a/b;
}

void mul(int a, int b){
    cout << a << " * " << b << " = " << a*b;
}

int main() {
    // Please write your code here.
    int a, c;
    char op;
    cin >> a >> op >> c;
    if(op == '+'){
        add(a ,c);
    }
    else if(op == '-'){
        dif(a, c);
    }
    else if(op == '/'){
        div_a(a, c);
    }
    else if(op == '*'){
        mul(a, c);
    }
    else{
        cout << "False";
    }
    
}
#include <iostream>
using namespace std;

string m;
string n;

bool isit(int a){
    bool flag = true;
    int idx = 0;
    for(int i = a; i<a+n.size(); i++){
        if(m[i] != n[idx]){
            flag = false;
        }
        idx++;
    }
    return flag;
}

void print(){
    bool flag = true;
    for(int i=0; i<m.size()-n.size()+1; i++){
        if(isit(i)){
            cout << i;
            flag = false;
            break;
        }
    }
    if(flag){
        cout << -1;
    }
}


int main() {
    // Please write your code here.
    cin >> m;
    cin >> n;
    print();
    
    return 0;
}
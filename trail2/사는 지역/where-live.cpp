#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        string addr;
        string city;

        Person(string name="", string addr="", string city=""){
            this->name = name;
            this->addr = addr;
            this->city = city;
        }
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Person P[n];
    string name, addr, city;
    string min;
    int min_idx;
    for(int i =0; i<n; i++){
        cin >> name >> addr >> city;
        Person tmp = Person(name, addr, city);
        P[i] = tmp;
        if(min == ""){
            min += P[0].name;
        }
        if(min <= P[i].name){
            min = "";
            min += P[i].name;
            
            min_idx = i;
        }
    }
    cout << "name " << P[min_idx].name << endl;
    cout << "addr " << P[min_idx].addr << endl;
    cout << "city " << P[min_idx].city << endl;
    return 0;
}
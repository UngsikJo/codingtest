
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int tall;
        double weight;

        Person(string name="", int tall=0, double weight=0.0){
            this->name = name;
            this->tall = tall;
            this->weight = weight;
        }
};

bool cmp_nm(Person a, Person b){
    return a.name < b.name;
}

bool cmp_tall(Person a, Person b){
    return a.tall > b.tall;
}

int main() {
    // Please write your code here.
    string name;
    int tall;
    double weight;

    Person P[5];

    cout << fixed;
    cout.precision(1);

    for(int i =0; i<5; i++){
        cin >> name >> tall >> weight;
        Person tmp = Person(name, tall, weight);
        P[i] = tmp;
    }
    sort(P, P+5, cmp_nm);
    cout << "name" << endl;
    for(int i =0; i<5; i++){
        cout << P[i].name << " " << P[i].tall << " " << P[i].weight << endl;
    }
    cout << endl;
    cout << "height" << endl;
    sort(P, P+5, cmp_tall);
    for(int i =0; i<5; i++){
        cout << P[i].name << " " << P[i].tall << " " << P[i].weight << endl;
    }
    return 0;
}
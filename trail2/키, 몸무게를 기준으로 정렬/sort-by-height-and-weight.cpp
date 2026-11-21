#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int tall;
        int weight;

        Person(string name = "", int tall = 0, int weight = 0){
            this->name = name;
            this->tall = tall;
            this->weight = weight;
        }
};

bool cmp(Person a, Person b){
    if(a.tall == b.tall){
        return a.weight > b.weight;
    }
    return a.tall < b.tall;
}

int main() {
    // Please write your code here.
    string name;
    int tall;
    int weight;

    int n;
    cin >> n;

    Person P[n];

    for(int i =0; i<n; i++){
        cin >> name >> tall >> weight;
        Person tmp = Person(name, tall, weight);
        P[i] = tmp;
    }

    sort(P, P+n, cmp);

    for(int i =0; i<n; i++){
        cout << P[i].name << " " << P[i].tall << " " << P[i].weight << endl;
    }

    return 0;
}
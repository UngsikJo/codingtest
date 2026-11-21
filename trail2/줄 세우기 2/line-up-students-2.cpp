#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int number;
        int tall;
        int weight;

        Student(int number=0,int tall=0, int weight=0){
            this->number = number;
            this->tall = tall;
            this->weight =weight;
        }
};

bool cmp(Student a, Student b){
    if(a.tall == b.tall){
        return a.weight > b.weight;
    }
    return a.tall < b.tall;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Student st[n];

    int tall;
    int weight;
    int number = 1;

    for(int i =0; i<n;i++){
        cin >> tall >> weight;
        Student tmp = Student(number, tall, weight);
        number++;
        st[i] = tmp;
    }

    sort(st, st+n, cmp);

    for(int i =0; i<n; i++){
        cout << st[i].tall << " " << st[i].weight <<" "<< st[i].number << endl;
    }
    return 0;
}
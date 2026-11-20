#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int tall;
        int weight;
        int number;

        Student(int tall=0, int weight=0, int number=0){
            this->tall = tall;
            this->weight = weight;
            this->number = number;
        }
};

bool cmp(Student a, Student b){
    if(a.tall == b.tall){
        if(a.weight == b.weight){
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.tall > b.tall;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Student st[n];
    int num, tall, weight;
    num = 1;
    for(int i =0; i<n ;i++){
        cin >> tall >> weight;
        Student tmp = Student(tall, weight, num);
        num++;
        st[i] = tmp;
    }

    sort(st, st+n, cmp);

    for(int i =0; i<n; i++){
        cout << st[i].tall << " " << st[i].weight << " " << st[i].number << endl;
    }
    return 0;
}
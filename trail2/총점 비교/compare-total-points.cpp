#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int a1, a2, a3;

        Student(string name ="", int a1=0, int a2=0, int a3=0){
            this->name = name;
            this->a1 = a1;
            this->a2 = a2;
            this->a3 = a3;
        }
};

bool cmp(Student a, Student b){
    return a.a1 + a.a2 + a.a3 < b.a1 + b.a2 + b.a3;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Student st[n];

    string name;
    int a1, a2, a3;
    for(int i =0; i<n; i++){
        cin >> name >> a1 >> a2 >> a3;
        Student tmp = Student(name, a1, a2, a3);
        st[i] = tmp;
    }

    sort(st, st+n, cmp);

    for(int i =0; i<n; i++){
        cout << st[i].name << " "<<st[i].a1 <<" "<< st[i].a2 <<" "<< st[i].a3 << endl;
    }
    return 0;
}
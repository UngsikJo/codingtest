#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int kor, eng, math;

        Student(string name = "", int kor =0, int eng =0, int math =0){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this-> math = math;
        }
};

bool cmp(Student a, Student b){
    if(a.kor == b.kor){
        
        if(a.eng == b.eng){
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Student st[n];

    string name;
    int kor, eng, math;

    for(int i =0; i<n; i++){
        cin >> name >> kor >> eng >> math;
        Student tmp = Student(name, kor, eng, math);
        st[i] = tmp;
    }

    sort(st, st+n, cmp);

    for(int i =0; i<n; i++){
        cout << st[i].name << " " << st[i].kor << " " << st[i].eng << " " << st[i].math << endl;
    }


    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    public:
        int number;
        int x;
        int y;
        int dist;

        Point(int number = 0, int x =0, int y=0, double dist =0){
            this->number = number;
            this->x = x;
            this->y = y;
            this->dist = dist;
        }
};

bool cmp(Point a, Point b){
    if(a.dist == b.dist){
        return a.number < b.number;
    }
    return a.dist < b.dist;
}

int dst_point(int x, int y){
    if(x < 0){
        x = -x;
    }
    if(y < 0){
        y = -y;
    }
    return x + y;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int num = 1;
    int x;
    int y;
    int dist;

    Point P[n];
    for(int i=0; i<n; i++){
        cin >> x >> y;
        dist = dst_point(x, y);
        Point tmp = Point(num,x,y, dist);
        P[i] = tmp;
        num++;
    }

    sort(P, P+n, cmp);

    for(int i =0; i<n; i++){
        cout << P[i].number << endl;
    }

    return 0;
}
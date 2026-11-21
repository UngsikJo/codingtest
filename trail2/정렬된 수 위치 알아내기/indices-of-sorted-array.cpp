#include <iostream>
#include <algorithm>
using namespace std;

class Number{
    public:
        int num;
        int curr;
        int past;

        Number(int num =0, int curr =0, int past =0){
            this->num = num;
            this->curr = curr;
            this->past = past;
        }
};

bool cmp(Number a, Number b){
    if(a.num == b.num){
        return a.curr < b.curr;
    }
    return a.num < b.num;
}

bool cmp_cur(Number a, Number b){
    return a.curr < b.curr;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Number num_arr[n];
    int num;
    for(int i =0; i<n; i++){
        cin >> num;
        Number tmp = Number(num, i+1);
        num_arr[i] = tmp;
    }
    sort(num_arr, num_arr+n, cmp);

    for(int i =0; i<n; i++){
        num_arr[i].past = i+1;
    }
    
    sort(num_arr, num_arr+n, cmp_cur);

    for(int i =0;i<n; i++){
        cout << num_arr[i].past << " ";
    }

    return 0;
}
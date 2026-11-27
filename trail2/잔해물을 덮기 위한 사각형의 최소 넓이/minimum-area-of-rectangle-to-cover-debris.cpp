#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2001][2001] = {0,};
    int middle = 1000;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i<= x2-1; i++){
        for(int j= y1; j<= y2-1; j++){
            arr[middle+i][middle+j] = 1;
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i<= x2-1; i++){
        for(int j= y1; j<= y2-1; j++){
            arr[middle+i][middle+j] = 0;
        }
    }
    //초깃값 문제 해결
    int x_min=2001, x_max=-2001;
    int y_min=2001, y_max=-2001;
    for(int i = 0; i < 2001; i++){
    for(int j = 0; j < 2001; j++){
        if(arr[i][j] == 1){
            if(x_min > i-middle){
                x_min = i-middle;
            }
            if(x_max < i-middle+1){
                x_max = i-middle+1;
            }
            if(y_min > j-middle){
                y_min = j-middle;
            }
            if(y_max < j-middle+1){
                y_max = j-middle+1;
            }
        }
    }
}
    //cout << x_min << " " << x_max << " " << y_min << " " << y_max;
    int result;
    //예외 처리문제
    if(x_min == 2001){
        cout << 0;
    }
    else{
        int result = (x_max - x_min) * (y_max - y_min);
        cout << result;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1, y1, x2, y2;
    int arr[2001][2001] ={0,};
    int middle = 1000;

    //A, B에 대한 영역 표시
    for(int i =0; i<2; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = y1; j<= y2-1; j++){
            for(int k=x1; k<= x2-1; k++){
                arr[middle+k][middle+j] = 1;
            }
        }
    }
    //M에 대한 영역을 다시 0으로 초기화
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i= y1; i<=y2-1; i++){
        for(int j=x1; j<= x2-1; j++){
            arr[middle+j][middle+i] = 0;
        }
    }

    int count = 0;
    for(int i = 0; i<2001; i++){
        for(int j =0; j<2001; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
    }
    cout << count;
    
    return 0;
}
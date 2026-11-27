#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[201][201] = {0,};
    int middle = 100;

    int color = 1;
    //1 : 빨간색, 2: 파란색

    int x1, y1, x2, y2;
    for(int i =0; i<n; i++){
        if(color == 3){
            color = 1;
        }
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1; j<= x2-1; j++){
            for(int k=y1; k<=y2-1; k++){
                arr[middle+j][middle+k] = color;
            }
        }
        color++;
    }

    int count = 0;

    for(int i =0; i<201; i++){
        for(int j =0; j<201; j++){
            if(arr[i][j] == 2){
                count++;
            }
        }
    }

    cout << count;
    
    return 0;
}
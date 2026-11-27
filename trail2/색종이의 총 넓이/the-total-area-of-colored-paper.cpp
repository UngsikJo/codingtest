#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int x1, y1;

    int arr[201][201] = {0,};
    int middle = 100;

    cin >> n;
    for(int i =0; i<n; i++){
        cin >> x1 >> y1;
        int x2 = x1 + 8;
        int y2 = y1 + 8;
        for(int j = y1; j<= y2-1; j++){
            for(int k = x1; k<=x2-1; k++){
                arr[middle+k][middle+j] = 1;
            }
        }
    }
    int count = 0;
    for(int i =0; i<201; i++){
        for(int j =0; j<201; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
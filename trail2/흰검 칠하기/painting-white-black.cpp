/*#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tile[2002] = {0,}; //현재의 색을 표시함. 각 타일 배열이 회색으로 바뀌는 조건을 제외하고 검은색 1, 흰색 2, 회색 3
    //회색이 바뀌는 조건은 white[i] >= 2 and black[i] >= 2
    //검은색 흰색 배열은 일단 다 표시함.
    int white[2002] = {0,};
    int black[2002] = {0,};
    int cur = 1001;

    int n;
    cin >> n;

    int dist;
    char a;

    for(int i =0; i<n; i++){
        cin >> dist >> a;
        if(a == 'R'){
            for(int j=0; j<=dist-1; j++){
                if(white[cur+j]>=2 and black[cur+j]>= 2){
                    continue;
                }
                else{
                    tile[cur+j] = 1;
                    black[cur+j]++;
                }
            }
            cur += dist-1;
        }
        if(a == 'L'){
            for(int j=0; j<=dist-1; j++){
                if(white[cur-j] >= 2 and black[cur-j]>=2){
                    continue;
                }
                else{
                    tile[cur-j] = 2;
                    white[cur-j]++;
                }
            }
            cur -= dist-1;
        }
    }

    int c_white=0;
    int c_black=0;
    int c_gray =0;

    for(int i =0; i< 2002; i++){
        if(white[i] >= 2 and black[i] >= 2){
            c_gray++;
        }
        else if(tile[i] == 2){
            c_white++;
        }
        else if(tile[i] == 1){
            c_black++;
        }
        
    }
    cout << c_white << " " << c_black << " " << c_gray;
    
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int tile[200001] = {0,};
    int white[200001] = {0,};
    int black[200001] = {0,};
    int cur = 100000;

    int n;
    cin >> n;

    int dist;
    char a;

    for(int i = 0; i < n; i++){
        cin >> dist >> a;

        if(a == 'R'){
            for(int j = 0; j < dist; j++){
                if(white[cur+j] >= 2 and black[cur+j] >= 2){
                    continue;
                }
                else{
                    tile[cur+j] = 1;
                    black[cur+j]++;
                }
            }

            cur += dist - 1; // 수정
        }
        else if(a == 'L'){
            for(int j = 0; j < dist; j++){
                if(white[cur-j] >= 2 and black[cur-j] >= 2){
                    continue;
                }
                else{
                    tile[cur-j] = 2; // 수정
                    white[cur-j]++;  // 수정
                }
            }

            cur -= dist - 1; // 수정
        }
    }

    int c_white = 0;
    int c_black = 0;
    int c_gray = 0;

    for(int i = 0; i < 200001; i++){
        if(white[i] >= 2 and black[i] >= 2){
            c_gray++;
        }
        else if(tile[i] == 2){
            c_white++;
        }
        else if(tile[i] == 1){
            c_black++;
        }
    }

    cout << c_white << " " << c_black << " " << c_gray;

    return 0;
}
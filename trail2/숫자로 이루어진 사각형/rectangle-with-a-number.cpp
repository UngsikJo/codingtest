#include <iostream>
using namespace std;
void print(int a){
    int count =1;
    for(int i=0;i<a; i++){
        for(int j=0; j<a; j++){
            if(count > 9){
                count = 1;
            }
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    print(n);
    return 0;
}
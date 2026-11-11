#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int count =1;
    int k =0;
    int a[1000];
    char b[1000];
    string result ="";
    for(int i =0 ; i<str.length(); i++){
        if(i == str.length()-1){
            a[k] = count;
            b[k] = str[i];
        }
        else if(str[i] == str[i+1]){
            count++;
        }
        else if(str[i] != str[i+1] ){
            a[k] = count;
            b[k] = str[i];
            k++;
            count =1;
        }
    }
    for(int i =0; i<k+1; i++){
        result += b[i];
        result += to_string(a[i]);
    }
    cout << result.length() << endl;
    cout << result;
    
    
    return 0;
}
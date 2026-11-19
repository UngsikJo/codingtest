#include <iostream>
using namespace std;

class Weather{
    public:
        string date;
        string week;
        string weather;

        Weather(string date="", string week="", string weather=""){
            this->date = date;
            this->week = week;
            this->weather = weather;
        }
};

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    Weather W[n];
    string date, week, weather;

 
    int min_idx;
    for(int i =0; i<n; i++){
        cin >> date >> week >> weather;
        Weather tmp = Weather(date, week, weather);
        W[i] = tmp;

    }
    string min="";
    for(int i =0; i<n; i++){
        if(W[i].weather == "Rain"){
            if(min == ""){
                min += W[i].date;
                min_idx = i;
            }
            if(min > W[i].date){
                min = "";
                min += W[i].date;
                min_idx = i;
            }
        }
    }
    cout << W[min_idx].date << " " << W[min_idx].week << " " << W[min_idx].weather;
    return 0;
}
#include <iostream>
using namespace std;

//윤년 판단 프로그램
bool y_yoon(int y){
    if(y%4 == 0){
        if(y%100 == 0){
            if(y%400 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }else{
        return false;
    }
}

//해당 날짜 존재 여부 조사 프로그램

bool exit(int y, int m ,int d){
    if(y_yoon(y)){
        if(m >= 1 and m<= 7){
            if(m%2 ==0){
                if(m == 2){
                    if( d<= 29){
                        return true;
                    }
                    else{
                        return false;
                    }
                }else{
                    if(d <= 30){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
            else{
                if(d<= 31){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        else if(m >= 8 and m <= 12){
            if(m%2 == 0){
                if(d<= 31){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                if(d<= 30){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
    else{
        if(m >= 1 and m<= 7){
            if(m%2 ==0){
                if(m == 2){
                    if( d<= 28){
                        return true;
                    }
                    else{
                        return false;
                    }
                }else{
                    if(d <= 30){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
            else{
                if(d<= 31){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        else if(m >= 8 and m <= 12){
            if(m%2 == 0){
                if(d<= 31){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                if(d<= 30){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }
}

//계절 출력 프로그램

void print_w(int y, int m, int d){
    if(exit(y, m, d)){
        if(m >= 3 and m <= 5){
            cout << "Spring";
        }
        else if(m >= 6 and m <= 8){
            cout << "Summer";
        }
        else if(m >= 9 and m <= 11){
            cout << "Fall";
        }
        else if(m == 12 or m==1 or m==2){
            cout << "Winter";
        }
    }
    else{
        cout << -1;
    }
}

int main(void){
    int y, m, d;
    cin >> y >> m >> d;
    print_w(y,m,d);
}
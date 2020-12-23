#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int speed_limit, car_speed, x;
    cin >> speed_limit >> car_speed;

    if(car_speed <= speed_limit){
        cout << "Congratulations, you are within the speed limit!" << endl;
    }else{
        x = car_speed - speed_limit;
        if (x >= 1 && x <= 20){
            cout << "You are speeding and your fine is $100." << endl;
        }else if (x >= 21 && x <= 30){
            cout << "You are speeding and your fine is $270." << endl;
        }else if(x >= 31){
            cout << "You are speeding and your fine is $500." << endl;
        }
    }

    return 0;
}
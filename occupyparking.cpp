#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int parking_space, occupied=0;
    string yesterday_parking, today_parking;

    cin >> parking_space >> yesterday_parking >> today_parking;

    for (int i = 0; i < parking_space; i++){
        if (yesterday_parking[i] == today_parking[i] && today_parking[i] == 'C'){
            occupied++; 
        }
    }
    cout << occupied << endl;
    return 0;
}
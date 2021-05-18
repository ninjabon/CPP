#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int parking_space, occupied=0;
    string yesterday_parking, today_parking;

    cin >> parking_space >> yesterday_parking >> today_parking;
    bitset <100> yesterdaybit(0);
    bitset <100> todaybit(0);
    
    for (int i = 0; i < parking_space; i++){
        if(yesterday_parking[i] == 'C'){
            yesterdaybit.set(i,1);
        }
        if(today_parking[i] == 'C'){
            todaybit.set(i,1);
        }
    }
    
    yesterdaybit = yesterdaybit & todaybit;

    for (int i = 0; i < 100; i++){
        if(yesterdaybit[i] == 1){
            occupied++;
        }
    }
    
    cout << occupied << endl;

    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int grade, total = 0;
    cin >> grade;
    // if (grade >= 1){
    //     total = 20;
    // }
    
    // if(grade >= 7){
    //     total = total + 10;
    // }
    // cout << "parent will get " << total << "$";

   if (grade >= 1 and grade < 7){
        total = 20;
    } else if(grade >= 7){
     total = 30;
    }
    cout << "parent will get " << total << "$";
    
    return 0;
}
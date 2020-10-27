#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int z;
    cin >> z;
    z=z%7;
    if(z==1){
        cout << "Monday" <<endl;
    }
    if(z==2){
        cout << "Tuesday" <<endl;
    }
    if(z==3){
        cout << "Wenesday" <<endl;
    }
    if(z==4){
        cout << "Thursday" <<endl;
    }
    if(z==5){
        cout << "Friday" <<endl;
    }
    if(z==6){
        cout << "Saturday" <<endl;
    }
    if(z==0){
        cout << "Sunday" <<endl;
    }
    return 0;
}
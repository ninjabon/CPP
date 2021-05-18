#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    string turn, street;
    stack <string> direction, road;
    
    while(street != "SCHOOL"){
        cin >> turn >> street;
        direction.push(turn);
        road.push(street);
    }
    road.pop();
    while(!road.empty()){
        if(direction.top()=="R"){
            cout << "Turn LEFT onto " << road.top() << " street." <<endl;
        } else{
            cout <<"Turn RIGHT onto " << road.top() << " street." <<endl;
        }
        direction.pop();
        road.pop();
    }
    if(direction.top()=="R"){
        cout << "Turn LEFT into your HOME." <<endl;
    } else{
        cout << "Turn RIGHT into your HOME." <<endl;
    }
    return 0;
}
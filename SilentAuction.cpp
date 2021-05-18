#include <bits/stdc++.h>
 
using namespace std;
void silent_auction_map(){
    map<int, string> bid;
    int person, money;
    string contestant;
    
    cin>>person;

    for (int i = 0; i < person; i++){
        cin >> contestant >> money;
        if (bid.count(money)==0) { 
            bid[money] = contestant;
        }
    }
    map<int, string>::iterator itr;
    itr = bid.end();
    --itr;
    cout << itr->second <<endl;
}
void silent_auction_reverse_map(){
    map<string, int> bid;
    int person, money, max_money=0;
    string contestant, winner;

    cin >> person;

    for (int i = 0; i < person; i++){
        cin >> contestant >> money;
        bid[contestant] = money;
        if (money > max_money){
            max_money = money;
            winner = contestant;
        }
    }
    cout << winner << endl;
}
void silent_auction(){
    int person, money=0, max_money=0;
    string contestant = "", winner;

    cin>>person;

    for (int i = 0; i < person; i++){
        cin >> contestant >> money;
        if(money > max_money){
            max_money = money;
            winner = contestant;
        }
    }
    cout << winner <<endl;
}
int main() {
   //silent_auction_map();
   //silent_auction();
   silent_auction_reverse_map();
    return 0;
}
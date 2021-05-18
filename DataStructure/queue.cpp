#include <bits/stdc++.h>
 
using namespace std;
 
void q(){
    queue <int> x;
    for (int i = 0; i < 5; i++){
        x.push(i);
    }
    cout << x.size() <<endl;
    cout << x.front() <<endl;
    cout << x.back() <<endl;
    x.push(8);
    while(!x.empty()){
        cout <<x.front() <<endl;
        x.pop();
    }
}
void pq(){
    priority_queue <int> x; //descending
    x.push(2);
    x.push(9);
    x.push(6);
    while(!x.empty()){
        cout << x.top() <<endl;
        x.pop();
    }
    priority_queue <char, greater<char>> xy; //ascending for character
    priority_queue <int, vector<int>, greater<int>> xyz; //ascending for number
}
int main() {
    q();
    pq();

    return 0;
}
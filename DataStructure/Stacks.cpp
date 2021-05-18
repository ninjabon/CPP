#include <bits/stdc++.h>
 
using namespace std;
void stack_while() {
    stack <int> pyramid;

    for (int i = 1; i <= 5; i++){
        pyramid.push(i);
    }

    while(!pyramid.empty()){
        cout << pyramid.top() <<endl;
        pyramid.pop();
    }
}
void stack_for() {
    stack <int> pyramid;

    for (int i = 1; i <= 5; i++){
        pyramid.push(i);
    }

    int size = pyramid.size();
    for (int i = 0; i < size ; i++){
        cout << pyramid.top() <<endl;
        pyramid.pop();
    }
}
int main() {
    stack <int> pyramid;

    for (int i = 1; i <= 5; i++){
        pyramid.push(i);
    }
    // cout << pyramid.size() <<endl;
    // pyramid.push(8);
    // cout << pyramid.top() <<endl;
    // cout << pyramid.size() <<endl;
    // pyramid.pop();
    // cout << pyramid.top() <<endl;
    // cout << pyramid.size() <<endl;
    
    stack_while();
    //stack_for();
    return 0;
}
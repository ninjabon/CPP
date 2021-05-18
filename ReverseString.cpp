#include <bits/stdc++.h>
 
using namespace std;
void with_stack(){
    string x= "Welcome to Ottawa STEM Club!";
    stack <char> y;
    for (int i = 0; i < x.size(); i++){
       y.push(x[i]);
    }
    while(!y.empty()){
        cout << y.top();
        y.pop();
    }
    cout <<endl;
}
void without_stack(){
    string x;
    getline(cin, x);
    for (int i = x.size(); i >= 0; i--){
        cout << x[i];
    }
    
}
void info(){
    int x;
    string y;
    cin >> x;
    cout << x <<endl;
    cin.ignore();
    getline(cin, y);
    cout << y <<endl;
}
int main() {
    //with_stack();
    //without_stack();
    info();
    return 0;
}
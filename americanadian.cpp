#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    string input;

    while(cin >> input){
        if (input == "quit!"){
           break;
        }
        if (input == "neighbor"){
            cout << "neighbour" << endl;
        }
        if (input == "door"){
            cout << "door" << endl;
        }
        if (input == "instructor"){
            cout << "instructour" << endl;
        }
        if (input == "transport"){
            cout << "transport" << endl;
        }
        if (input == "floor"){
            cout << "floor" << endl;
        }
    }

    return 0;
}
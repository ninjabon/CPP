#include <bits/stdc++.h>

using namespace std;


int main() {
    string UserInput, ComputerInput;
    int ComputerInt;

    srand((unsigned) time(0));
    while (UserInput != "quit") {
        cin >> UserInput;
        
        if (UserInput == "rock") {
            cout << "computer choose paper" << endl;
        } else if(UserInput == "paper"){
            cout << "computer choose scissors" << endl;
        }else if ( UserInput == "scissors"){
            cout << "computer choose rock" << endl;
        } else if (UserInput != "quit") {
            cout << "invalid input" << endl;
        }
    }
    return 0;
}
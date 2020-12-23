#include <bits/stdc++.h>

using namespace std;


int main() {
    string UserInput, ComputerInput;
    int ComputerInt;

    srand((unsigned) time(0));
    while (UserInput != "quit" && UserInput != "exit") {
        cin >> UserInput;
        if(UserInput == "quit" || UserInput == "exit"){
            break;
        }
        ComputerInt = (rand() % 3) + 1;
        switch(ComputerInt){
            case 1:
                ComputerInput = "rock";
                break;
            case 2:
                ComputerInput = "paper";
                break;
            case 3:
                ComputerInput = "scissors";
                break;
        }
        cout << ComputerInput << endl;

        if (UserInput == ComputerInput) {
            cout << "draw" << endl;
        } else if (UserInput == "rock" && ComputerInput == "scissors") {
            cout << "user wins" << endl;
        } else if (UserInput == "rock" && ComputerInput == "paper") {
            cout << "computer wins" << endl;
        } else if (UserInput == "paper" && ComputerInput == "rock") {
            cout << "user wins" << endl;
        } else if (UserInput == "paper" && ComputerInput == "scissors") {
            cout << "computer wins" << endl;
        } else if (UserInput == "scissors" && ComputerInput == "paper") {
            cout << "user wins" << endl;
        } else if (UserInput == "scissors" && ComputerInput == "rock") {
            cout << "computer wins" << endl;
        } else if (UserInput != "quit" && UserInput != "exit") {
            cout << "invalid input" << endl;
        }
    }
    return 0;
}
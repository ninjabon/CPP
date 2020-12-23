#include <bits/stdc++.h>

using namespace std;


int main() {
    string response;
    do {
        cout << "Enter menu choice " << endl;
        cout << "More" << endl << "Quit" << endl;
        cin >> response;
        cout << "your input: " << response << endl;
    }while (response != "Quit");

    return 0;
}
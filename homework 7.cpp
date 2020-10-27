#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    char g1, g2, g3, g4, g5, g6;
    int total = 0;

    cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
    if (g1 == 'w' or g1 == 'W' ) {
       total = total + 1;  
    }

    if (g2 == 'W' ) {
       total = total + 1;
    }

    if (g3 == 'W' ) {
       total = total + 1; 
    }

    if (g4 == 'W' ) {
       total = total + 1;   
    }

    if (g5 == 'W' ) {
       total = total + 1;
    }

    if (g6 == 'W' ) {
       total = total + 1 ;
    }
    
    if (total == 5 or total == 6 ) {
        cout << "1" << endl;
    }
    else if ( total == 3 or total == 4) {
        cout << "2" << endl;
    }
    else if ( total == 1 or total == 2) {
        cout << "3" << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}
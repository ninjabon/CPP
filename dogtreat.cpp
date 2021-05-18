#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int S;
    int M;
    int L;
    int score;

    cin >> S;
    cin >> M;
    cin >> L;

    score = 1*S+2*M+3*L;

    if ( score >= 10) {
        cout << "happy" << endl;
    } else {
         cout << "sad" << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int k;
    char icon[3][3]={
        {'*','x','*'},
        {' ','x','x'},
        {'*',' ','*'}
    };

    cin >> k;
    
    for (int i = 0; i < 3; i++){ // go through the row
        for (int r = 0; r < k; r++){ // repeat k time the row
            for (int j = 0; j < 3; j++){ //go through column
                for (int e = 0; e < k; e++){ // repeat k time the column/character
                    cout << icon[i][j];
                }
            } 
            cout << endl; //after each row
        }
    }
    
    return 0;
}
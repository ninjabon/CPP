#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int t, s, h;

    cin >> t >> s >> h;

    for (int i = 0; i < t; i++){
        cout << "*";
        for (int i = 0; i < s; i++){
            cout << " ";
        }
        cout << "*";
        for (int i = 0; i < s; i++){
            cout << " ";
        }
        cout << "*" <<endl;
    }
    for (int i = 0; i < 3 + (2 * s); i++){
        cout << "*";
    }
    cout << endl;
    for (int i = 0; i < h; i++){
        
        for (int i = 0; i < s+1; i++){
            cout << " " ;
        }
        cout << "*" << endl;
        
        
    }
    
    
    
    return 0;
}
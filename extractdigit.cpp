#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int digit, x;
    cin>>digit;
    // while (digit > 0) {
    //     cout << digit%10 <<endl;
    //     digit /= 10;
    // }
    x = pow(10, to_string(digit).size()-1);
    while (x>0){
        cout << (digit/x)%10 << endl;
        x/=10;
    }
    
 

    

    return 0;
}
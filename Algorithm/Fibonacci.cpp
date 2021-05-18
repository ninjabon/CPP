#include <bits/stdc++.h>
 
using namespace std;

void fibo(int imp){
    int x=0, x1=1, result;
    cout << 0 <<endl;
    for (int i = 0; i < imp-1; i++){
        result = x + x1;
        x = x1;
        x1 = result;
        cout << result <<endl;
    }
    
}
int main() {
    int input;
    int x=0, x1=1, result;
    cin >>input;
    fibo(input);
    return 0;
}
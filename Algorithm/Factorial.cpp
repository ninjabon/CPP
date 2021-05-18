#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int x=0;
    for (int i = 2; i <= 100; i++){
        x = (x+1)*i;
    }
    cout << x <<endl;
    return 0;
}
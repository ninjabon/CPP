#include <bits/stdc++.h>
 
using namespace std;
int x=100;
 
void my_function() {
    x = 200;
    cout << x <<endl;
} 

int main() {
    cout << x <<endl;
    my_function();
    cout << x <<endl;
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
int aplusb(int a, int b) {
    return a + b;
}
int aminusb(int a, int b){
    return a - b;
} 
int atimesb(int a, int b){
    return a * b;
} 
double adivideb(double a, double b){
    return a / b;
} 
int main() {
    double i;
    i = aplusb(5,4);
    cout << i <<endl;
    i = aminusb(2,3);
    cout << i <<endl;
    i = atimesb(2,4);
    cout << i <<endl;
    i = adivideb(7,3);
    cout << setprecision(5) <<i <<endl;;
   
    return 0;
}
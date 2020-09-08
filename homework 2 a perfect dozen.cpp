#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    
    int rPQRS = 0;
    int x = 0;
    int y = 0;
    
    cout <<endl << "dimensions of the big rectangle: " ;
    cin >> rPQRS;
    cout << "number of small rectangle: ";
    cin >> x;

    y = rPQRS / x;
    cout <<endl << "What is the dimensions of each rectangles: " << y<< "cm²" <<endl;
    


    return 0;
}
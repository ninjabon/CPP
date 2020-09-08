#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int stu = 30;
    int bird_ws = 12;
    int animal_ws = 17;
    int both_ws = 5;
    int no_ws = 0;
    
    no_ws = stu - (bird_ws + animal_ws - both_ws);
    cout <<endl << "answer: " << no_ws << " student missed out" <<endl;


    return 0;
}
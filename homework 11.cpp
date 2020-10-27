#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int digit1, digit2, digit3, digit4, digit5;
    int number_in, sum;
	cin >> number_in; 

    for (int i = 0; i < number_in; i++)
    {
        digit1 = i/10000;
        digit2 = (i%10000)/1000;
        digit3 = (i%1000)/100;   
        digit4 = (i%100)/10;
        digit5 = i%10;
       
        sum = digit1+digit2+digit3+digit4+digit5;
        if(sum==3){
           cout << i <<endl;
        }
    }
    
    
   

    return 0;
}
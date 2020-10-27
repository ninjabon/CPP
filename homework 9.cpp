#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int digit;
    string number_in;
	cin >> number_in; 
    
    digit = 10;
    for(int i=1; i<=number_in.length(); i++){
      
      cout<<"Value of digit is: "<<(number_in%digit)/(digit/10)<<endl;
      digit = digit*10;
   }

    
    //digit = number_in/10000;
    // cout << "The first digit is: " << digit << endl; 
   
    // digit = (number_in%10000)/1000;
    // cout << "The second digit is: " << digit << endl;
  
    // digit = (number_in%1000)/100;   
    // cout << "The third digit is: " << digit << endl;
    
    // digit = (number_in%100)/10;
    // cout << "The fourth digit is: " << digit << endl;
    
    // digit = number_in%10;
    // cout << "The fifth digit is: " << digit << endl;
    return 0;
}
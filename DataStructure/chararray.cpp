#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    string greeting= "hello world! \nhello world! \n", str[11];
    
    greeting = greeting + "And goodbye";
    
    cout << greeting << endl;
    greeting = greeting.insert(5, " beautiful");
    cout << greeting << endl;
    greeting = greeting.replace(29, 6, " ottawa");
    cout << greeting << endl;
    // greeting = greeting.substr(0, 5); 
    // cout << greeting << endl;
    cout << greeting.length() << endl;

    //size_t found_idx = greeting.find("ottawa");
    auto found_idx = greeting.find("ottawa");

    if (found_idx == string::npos){
        cout << "Not found!" << endl;
    }else{
        cout << "found at: " << found_idx <<endl;
    }
    return 0;
}
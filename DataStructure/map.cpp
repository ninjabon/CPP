#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    map<string, int> family = {
        {"Li", 30},
        {"Stephane", 28},
        {"Elizabeth", 22}
    };

    family["Danny"] = 19; //add
    family["Elizabeth"] = 26; //update
    family.erase("Stephane"); //delete

    cout << family["Li"] <<endl; // find the value (int) of string

    for (auto &item : family){ // loop through map and place key (string) in alphabetic order
        cout << item.first << " " << item.second <<endl; // key in item.first and value in item.second
    }

    int has_key = family.count("Li"); //1 if exist, 0 not exist
    cout << has_key <<endl;
    if (family.count("nat")>0) { //is key exist or not
        cout << "key exist" <<endl;
    }else{
        cout << "key does not exist" <<endl;
    }

    return 0;
}
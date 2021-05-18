#include <bits/stdc++.h>
 
using namespace std;


// str =  to_string(year)  convert from int to string     // Solution 2
// str[1], str[0]
// insert the char to the set

bool unique_1(int year){
    string x = to_string(year);
    set<int> myset;
    for (long unsigned int i = 0; i < x.size(); i++){
        myset.insert(x[i]);
    }
    if(myset.size()==x.size()){
        return true;
    }else{
        return false;
    }
}

bool unique(int year) {
    int x = pow(10, to_string(year).size()-1);
    set<int> myset;
    while (x>0){
        myset.insert((year/x)%10);
        x/=10;
    }
    // cout << myset.size() << endl;
    // cout << to_string(year).size() << endl;
    // cout << pow(10, to_string(year).size()-1) << endl;

    if(myset.size()==to_string(year).size()){
        return true;
    }else{
        return false;
    }
}


int main() {
    int year;
    cin >> year;
    
    while (true){
        year++;
        //if (unique(year)) {
        if (unique_1(year)){  
            cout << year << endl;
            break;
        }
    }
    
    return 0;
}
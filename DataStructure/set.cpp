#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    set<int> super;

    super.insert(3);
    super.insert(2);
    super.insert(1);
    super.insert(3);
    cout << super.size() <<endl;

    // set<int> at = {1,2,3,4};
    // for (auto item : at){
    //     cout << item << " ";
    // }
    // cout << endl;
    // set<int> su = {5,6,7,8};
    // //su.erase(1);
    // for (auto it = su.begin(); it != su.end(); it++){
    //     cout << "Pointer: "<< &it << " Value: " << *it <<endl;
    // }

    // auto it = su.begin();
    // it++;
    // cout << *it << endl;
    // //advance(it,1);
    // advance(it,2);
    // cout <<*it <<endl;

    // auto yu = at.find(2);
    // if (yu != at.end()){
    //     cout << &it <<endl;
    //     cout << *it <<endl;
    //     cout << "Found!" <<endl;
    // } else {
    //     cout << &it <<endl;
    //     cout << *it <<endl;
    //     cout << "not found" <<endl;
    // }
    return 0;
}
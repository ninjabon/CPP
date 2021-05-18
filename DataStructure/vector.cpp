#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    vector<int> halo={2, 8, 6, 7, 3};

    // for (int i = 0; i < halo.size(); i++){
    //     cout << halo[i] << endl;
    // }

    //cout <<halo.front() << endl;
    //cout<<halo.back()<<endl;
    // sort(halo.begin(), halo.end(), greater<>()); //descending
    // sort(halo.begin(), halo.end()); // ascending
    //halo.push_back(1);
    halo.insert(halo.begin(), 5);
    //halo.pop_back();
    //halo.erase(halo.end());
    //halo.erase(halo.begin()+2);
    for(auto item : halo){
        cout <<item<< endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    queue <string> songs;
    string music;
    
    while(music!= "end"){
        getline(cin, music);
        if(music != "end"){
            songs.push(music);
        }
        
    }
    while(!songs.empty()){
        cout << songs.front() <<endl;
        songs.pop();
    }
    return 0;
}
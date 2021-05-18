#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int v = 0, h = 0, slot;
    string input;
    int grid[2][2] = {
        {1, 2},
        {3, 4}
    };
    cin >> input;
    for (int i = 0; i < input.length(); i++){
        if(input[i] == 'V'){
            v++;
        } else if (input[i] == 'H'){
            h++;
        }
    }
    if(v % 2){
        swap(grid[0][0], grid[0][1]);
        swap(grid[1][0], grid[1][1]);
    }
    if(h % 2){
        swap(grid[0][0], grid[1][0]);
        swap(grid[0][1], grid[1][1]);
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; i++){
            cout << grid[i][j] << " ";
        }
        cout <<endl;
    }
    
    
    

    return 0;
}
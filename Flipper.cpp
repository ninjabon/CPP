#include <bits/stdc++.h>
 
using namespace std;
int grid[2][2] = {
        {1,2},
        {3,4}
    };
int final[2][2];

void horizontal(){
    final[1][0] = grid[0][0];
    final[1][1] = grid[0][1];
    final[0][0] = grid[1][0];
    final[0][1] = grid[1][1];

    grid[0][0] = final[0][0];
    grid[0][1] = final[0][1];
    grid[1][0] = final[1][0];
    grid[1][1] = final[1][1];
} 
void vertical(){
    final[0][1] = grid[0][0];
    final[0][0] = grid[0][1];
    final[1][1] = grid[1][0];
    final[1][0] = grid[1][1];

    grid[0][0] = final[0][0];
    grid[0][1] = final[0][1];
    grid[1][0] = final[1][0];
    grid[1][1] = final[1][1];
}

int main() {
    string user_input;
    cin >> user_input;
    for (long unsigned int i = 0; i < user_input.length(); i++){
        if(user_input[i] == 'H'){
            horizontal();
        } else if(user_input[i] == 'V'){
            vertical();
        }
    }
    cout << final[0][0] << " " << final[0][1] <<endl;
    cout << final[1][0] << " " << final[1][1] <<endl;

    return 0;
}
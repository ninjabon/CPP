#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int magic_square[4][4], magic_square_value=0, column_total=0, row_total=0;
    bool magic;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> magic_square[i][j];
        }
    }
    for (int i = 0; i < 4; i++){
        row_total = 0;
        for (int j = 0; j < 4; j++){
            row_total = row_total + magic_square[i][j];
        }
        if(magic_square_value == 0){
            magic_square_value=row_total;
        } 
        if(magic_square_value==row_total){
            magic = true;
        }else{
            magic = false;
            break;
        }
        
    }
    if(magic == true){
        for (int i = 0; i < 4; i++){
            column_total = 0;
            for (int j = 0; j < 4; j++){
                column_total = column_total + magic_square[j][i];
            }
        
            if(magic_square_value==column_total){
                magic = true;
            }else{
                magic = false;
                break;
            }
        }
    }
    
    
    
    if(magic == true){
        cout << "magic" << endl;
    }else{
        cout << "not magic" << endl;
    }
    
    return 0;
}
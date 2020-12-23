#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int C, perimeter, height, width, small_perimeter=0, best_height=0, best_width=0;
    int operations = 0;         // or Calculations
    cin >> C;
    while(C != 0){
        small_perimeter=C;
        for (height = 0; height < C; height++){
            for (width = 0; width < C; width++){
                operations++;
                if (height * width == C){
                    perimeter = (height + width) * 2;
                    if(perimeter < small_perimeter){
                        small_perimeter = perimeter;
                        best_height = height;
                        best_width = width;
                    }
                    
                }
            }
        } 
        cout << "Minimum perimeter is " << small_perimeter <<  " with dimensions " << best_height << " x " << best_width << endl;
        cout << "Total operations: " << operations << endl;
        cin >> C; 
    }
    return 0;
}
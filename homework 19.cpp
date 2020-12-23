#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int angle_1, angle_2, angle_3, degree;
    cin >>angle_1 >> angle_2 >> angle_3;

    degree = angle_1+angle_2+angle_3;
    if(angle_1==60 && angle_2==60 && angle_3==60){
        cout << "Equilateral" << endl;
    }else if((angle_1 == angle_2 || angle_2 == angle_3 || angle_1 == angle_3) && (degree == 180)){
        cout << "Isosceles" << endl;
    }else if(angle_1 != angle_2 && angle_1 != angle_3 && degree == 180){
        cout << "Scalene" <<  endl;
    }else if(degree != 180){
        cout << "Error" << endl;
    }
    return 0;
}
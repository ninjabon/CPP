#include <bits/stdc++.h>
 
using namespace std;
int start_year;

bool election_year(int from_year, string office_type){
    int result, divider;
    result= from_year-start_year;
    if (office_type=="mayor"){
        divider = 4;
    }
    if (office_type=="treasurer"){
        divider = 2;
    }
    if (office_type=="chiefProgrammer"){
        divider = 3;
    }
    if (office_type=="dogCatcher"){
        divider = 5;
    }
    if(result % divider == 0){
        return true;
    }else{
        return false;
    }
}

int main() {
    int x, end_year;
    cin >> start_year >> end_year;
    cout << "All positions change in year " << start_year <<endl;
    x=start_year + 1;
    while(x <= end_year){
        if(election_year(x, "mayor")){
            if(election_year(x, "treasurer")){
                if(election_year(x, "chiefProgrammer")){
                    if(election_year(x, "dogCatcher")){
                        cout << "All positions change in year " << x <<endl;
                    }
                }
            }
        }
        x++;
    }
    return 0;
}
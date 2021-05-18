#include <bits/stdc++.h>
 
using namespace std;

vector <int> vect;
vector <int> result;
long unsigned int n;
bool validate_cycle2(long unsigned int cycle){
    long unsigned int index = 0;
    // while(index+cycle < n-1){ // finding the leap
    //     if(vect[index] != vect[index+cycle])
    //         return false;
    //     index++;
    // }
    // return true;
    
    for (index = 0; index+cycle < n-1; index++){
        if(vect[index] != vect[index+cycle])
            return false;
    }
    return true;
    
}
int main() {
    int temp, AvgTemp; 
    long unsigned int j;
    cin >> n;
    while (n!=0) {
        cin >>AvgTemp;
        if(n==1){ //calculate differnece between each temperature and store result in vector
            vect.push_back(AvgTemp);
        }else{
            for (long unsigned int i = 0; i < n-1; i++){
                cin >> temp;
                vect.push_back(temp-AvgTemp);
                AvgTemp=temp; 
            }
        }
        if(n==1){ 
            result.push_back(0);
        }else{
            for(j = 1; j < n; j++){ // validate which cycle is valid
                if(validate_cycle2(j)){
                    result.push_back(j);
                    break;
                }
            }
        }
        vect.clear();
        cin >> n;
    }
    for(auto item : result){
        cout <<item<< endl;
    }
    return 0;
}
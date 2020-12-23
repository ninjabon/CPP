#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    int N[5], K, total;
    
    cin >> N[0] >> K;

    total = N[0];
    for (int i = 1; i <= K; i++){
        N[i] = N[0] * pow(10, i);
        total += N[i];
    }
    cout << total << endl;

    return 0;
}
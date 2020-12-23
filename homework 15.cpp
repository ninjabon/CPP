#include <bits/stdc++.h>

using namespace std;


int main() {
    //P= number of people in infected_day
    //R = infection rate
    //N = people on Day 0 with the disease
    int P, R, N, i = 0, infected_day = 0, infected_total = 0;

    cin >> P >> N >> R;

    while (infected_total <= P) {
        if (infected_day == 0) {
            infected_day = N;
        } else {
            infected_day = N * pow(R, i);
        }
        infected_total = infected_total + infected_day;
        i++;
    }
    i = i - 1;
    cout << i << endl;
    return 0;
}
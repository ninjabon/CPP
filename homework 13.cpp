#include <bits/stdc++.h>

using namespace std;


int main() {
    int first, second, third, fourth;
    cin >> first >> second >> third >> fourth;

    if ((first == 8 or first == 9) &&
        (second == third) &&
        (fourth == 8 or fourth == 9)) {
        cout << "ignore" << endl;
    } else {
        cout << "answer" << endl;
    }


    return 0;
}
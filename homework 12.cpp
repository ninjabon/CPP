#include <bits/stdc++.h>

using namespace std;


int main() {
    int num, sum;
    cin >> num;

    for (int x = 1; x < num; x++) {
        for (int y = 1; y < num; y++) {
            for (int z = 1; z < num; z++) {
                if (x != y and x != z and y != z) {
                    sum = x + y + z;
                    if (sum == num) {
                        cout << x << " " << y << " " << z << endl;
                    }
                }
            }
        }
    }


    return 0;
}
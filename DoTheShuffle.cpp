#include <bits/stdc++.h>

using namespace std;


int main() {
    vector < char > playlist = {
        'A',
        'B',
        'C',
        'D',
        'E'
    };
    int n, b;
    char x;

    do {
        cin >> b >> n;
        if (b == 1) {
            for (int i = 0; i < n; i++) {
                x = playlist.front();
                playlist.erase(playlist.begin());
                playlist.push_back(x);
            }
        } else if (b == 2) {
            for (int i = 0; i < n; i++) {
                x = playlist.back();
                playlist.pop_back();
                playlist.insert(playlist.begin(), x);
            }
        } else if (b == 3) {
            for (int i = 0; i < n; i++) {
                x = playlist.front();
                playlist.erase(playlist.begin());
                playlist.insert(playlist.begin() + 1, x);
            }
        }
    } while (b != 4);
    for (int i = 0; i < int(playlist.size()); i++) {
    }
        cout << playlist[i] << " ";
    return 0;
}
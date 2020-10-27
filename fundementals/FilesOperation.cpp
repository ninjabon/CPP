#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    ofstream fout("file.in");
    string str = "Hi";
    str = " using name space";
    fout << str;


    ifstream fin("file.in");
    fin >> str;
    cout << str;
    // ifstream cin("path_to_file/file.in");
    // int x, y, z;
    // cin >> x;
    // cin >> y;
    // cin >> z;
    return 0;
}
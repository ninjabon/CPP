#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    char my_char = 'X';
    cout << int(my_char) << endl;

    int char_num = 109;
    cout << char(char_num) << endl;

    char char_1 = 97, char_2 = 98, char_3 = 99;
    cout << char_1 << " " << char_2 << " " << char_3 << endl;

    // unicode
    string str = "你好!";
    cout << str << endl;

    // Use string instead of char
    string chinese_str = "你";
    cout << chinese_str << endl;

    // Is it display
    char chinese_c = '好';
    cout << chinese_c << endl;

    return 0;
}
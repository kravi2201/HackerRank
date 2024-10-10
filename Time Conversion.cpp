#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int h;
    sscanf(s.c_str(), "%d", &h);
    if(s[8] == 'A' && h == 12) h = 0;
    if(s[8] == 'P' && h != 12) h+=12;
    cout << setw(2) << setfill('0') << h;
    cout << s.substr(2, 6);
    return 0;
}

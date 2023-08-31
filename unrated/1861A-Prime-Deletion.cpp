#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    if (s[0] == '1')
        cout << "13\n";
    else if (s[0] == '2')
        cout << "23\n";
    else if (s[0] == '3')
        cout << "31\n";
    else if (s[0] == '4')
        cout << "41\n";
    else if (s[0] == '5')
        cout << "53\n";
    else if (s[0] == '6')
        cout << "61\n";
    else if (s[0] == '7')
        cout << "71\n";
    else if (s[0] == '8')
        cout << "83\n";
    else if (s[0] == '9')
        cout << "97\n";
        
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Thursday, August 31, 2023 | 20:35:31 (UTC +06:00) Dhaka
*/
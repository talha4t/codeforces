#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
char ch[3][3];

bool win(char symbol) {
    for (int i = 0; i < 3; i++) {
        if (ch[i][0] == symbol and ch[i][1] == symbol and ch[i][2] == symbol)
            return true;
    }

    for (int j = 0; j < 3; j++) {
        if (ch[0][j] == symbol and ch[1][j] == symbol and ch[2][j] == symbol)
            return true;
    }

    if (ch[0][0] == symbol and ch[1][1] == symbol and ch[2][2] == symbol)
        return true;
    if (ch[0][2] == symbol and ch[1][1] == symbol and ch[2][0] == symbol)
        return true;

    return false;
}

string solve() {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin >> ch[i][j];
    }

    if (win('X'))
        return "X";
    else if (win('O'))
        return "O";
    else if (win('+'))
        return "+";
    else
        return "DRAW";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        cout << solve() << '\n';
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, July 07, 2023 | 22:00:25 (UTC +06:00) Dhaka
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    deque<char> q;
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch;

        q.push_back(ch);
    }

    while(!q.empty() && q.front() == 'B')
        q.pop_front();

    while(!q.empty() && q.back() == 'A')
        q.pop_back();
    
    cout << ((int)q.empty() ? 0 : (int)q.size() - 1) << '\n';

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
    Monday, November 27, 2023 | 10:15:39 (UTC +06:00) Dhaka
*/
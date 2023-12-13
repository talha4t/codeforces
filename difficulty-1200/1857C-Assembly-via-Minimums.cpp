#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> b((n * (n - 1)) / 2);
    for (int i = 0; i < (n * (n - 1)) / 2; i++)
        cin >> b[i];


    sort(b.begin(), b.end());

    int cnt = n - 1;
    for (int i = 0; i < (n * (n - 1)) / 2; ) {
        cout << b[i] << ' ';

        i += cnt;
        cnt--;
    }

    cout << b[((n * (n - 1)) / 2) - 1] << '\n'; 

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
    Monday, September 04, 2023 | 05:22:39 (UTC +06:00) Dhaka
*/


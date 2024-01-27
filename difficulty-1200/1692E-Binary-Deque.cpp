#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    int L = 0, longest_len = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];

        while(sum > k) {
            sum -= a[L];
            L++;
        }

        if (sum == k)
            longest_len = max(longest_len, i - L + 1);
    }

    int all_sum = accumulate(a.begin(), a.end(), 0);

    if (all_sum < k)
        cout << -1;
    else
        cout << n - longest_len;

    cout << '\n';
    
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
    Saturday, November 25, 2023 | 08:33:11 (UTC +06:00) Dhaka
*/
#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

vector<int> v;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool almostPrime(int n) {

    int ct = 0;
    for (int i = 0; i < v.size(); i++) {
        if (n % v[i] == 0)
            ct++;
    }

    if (ct == 2)
        return true;
    
    return false;
}

bool solve() {
    
    int n; cin >> n;


    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (almostPrime(i))
            ans++;
    }

    cout << ans << ed;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 2; i <= 3000; i++) {
        if (isPrime(i))
            v.push_back(i);
    }

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Thursday, May 04, 2023 | 20:07:52 (UTC +06:00) Dhaka
*/
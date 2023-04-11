#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int n = 100000;
vector<int> v;

void sieveOfEratosthenes() {
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i += 2) {
        if (isPrime[i] and (ll)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    } 

    for (int i = 0; i <= n; i++) {
        if (isPrime[i])
            v.push_back(i);
    }
}

bool solve() {
    
    int d; cin >> d;

    int res = 1, next_prime = -1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] - 1 >= d) {
            res *= v[i];
            next_prime = v[i];
            break;
        } 
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] - next_prime >= d) {
            res *= v[i];
            break;
        }
    }

    cout << res << ed;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    sieveOfEratosthenes();

    while(t--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Tuesday, April 11, 2023 | 17:00:16 (UTC +06:00) Dhaka
*/
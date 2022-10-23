#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int isPrime(int m) {

    if (m == 2) {
        return 1;
    }

    if (m % 2 == 0) 
        return 0;
    
    for (int i = 3; i <= sqrt(m); i++) {
        if (m % i == 0)
            return 0;
    }

    return 1;

}

int nextPrime(int N){
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
 
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    if (m == nextPrime(n) and isPrime(m) == 1)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

    return 0;
}

//github.com/talha4t (Talha Mahmud)

#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

#define MAX 10000001
bool is_not_prime2[MAX + 10];
int n = MAX;
vector<long long int> v;

void sieveOfEratosthenes()
{
    int i, j;
    is_not_prime2[1] = true;
 
    v.push_back(2);
    for (i = 4; i <= n; i += 2)
        is_not_prime2[i] = true;
 
    int root = sqrt(n);
    for (i = 3; i <= n; i += 2)
    {
        if (is_not_prime2[i] == false)
        {
            v.push_back(i);
            if (i <= root)
            {
                for (j = i * i; j <= n; j += 2 * i)
                {
                    is_not_prime2[j] = true;
                }
            }
        }
    }
    // O(n * log log n)
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
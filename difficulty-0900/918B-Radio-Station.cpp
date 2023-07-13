#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    map<string, string> mp;
    for (int i = 1; i <= n; i++) {
        string name, ip;
        cin >> name >> ip;

        mp[ip] = name;
    }

    for (int i = 1; i <= m; i++) {
        string command, ip;
        cin >> command >> ip;

        ip.erase(ip.size() - 1);
        
        cout << command << ' ' << ip << "; #" << mp[ip] << ed;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)



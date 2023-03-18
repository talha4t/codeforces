#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ct[] = {5, 7, 5};

    vector<string> v;
    for (int i = 0; i < 4; i++) {
        string s;
        getline(cin, s);

        v.push_back(s);
    }  

    for (int i = 0; i < 3; i++) {
        int c = 0;

        for (auto u : v[i]) {
            if (isVowel(u))
                c++;
        }
        
        if (c != ct[i])
            return cout << "NO\n", 0;
    }  

    cout << "YES" << ed;

    return 0;
}

//github.com/talha4t (Talha Mahmud)

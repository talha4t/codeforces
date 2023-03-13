    #include <bits/stdc++.h>
    using namespace std;

    #define ed '\n'
    #define ll long long int 
    #define mod 1000000007

    bool solve() {
        
        string s; cin >> s;

        int len = s.size();

        bool one = false, two = false;

        int c1 = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'A' and s[i] <= 'Z')
                c1++;
        }
        if (c1 == len)
            one = true;

        int c2 = 0;
        if (s[0] >= 'a' and s[0] <= 'z')
            c2++;
        for (int i = 1; i < len; i++) {
            if (s[i] >= 'A' and s[i] <= 'Z')
                c2++;
        }
        if (c2 == len)
            two = true;

        char ch = 'a';
        if (one) {
            ch = tolower(s[0]);
            cout << ch;

            for (int i = 1; i < len; i++) {
                ch = tolower(s[i]);
                cout << ch;
            }
        }
        else if (two) {
            ch = toupper(s[0]);
            cout << ch;

            for (int i = 1; i < len; i++) {
                ch = tolower(s[i]);
                cout << ch;
            }
        }
        else
            cout << s << ed;

        return true;
    }

    int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

        // int t;
        // cin >> t;

        // while(t--) {
            solve();
        // }
        
        return 0;
    }

    //github.com/talha4t (Talha Mahmud)

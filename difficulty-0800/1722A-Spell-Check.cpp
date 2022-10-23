#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t, n;
    str s;
    cin >> t;

    while(t--) {

        cin >> n;
        cin >> s;

       sort(s.begin(), s.end());

       cout << (s == "Timru" ? "YES" : "NO") << ed;

    //    if (s[0] == 'T' && s[1] == 'i' && s[2] == 'm' && s[3] == 'r' && s[4] == 'u' && n== 5)
    //         cout << "YES" << ed;
    //     else
    //         cout << "NO" << ed;
    }

    return 0;
}
// O(n ^ 2)
#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int s = 0, d = 0, ct = 0;
    
    while(!v.empty()) {
        ct++;
        if (ct % 2) {
            if (v[0] > v.back()) {
                s += v[0];
                v.erase(v.begin());
            }
            else {
                s += v.back();
                v.pop_back();
            }
        }
        else {
            if (v[0] > v.back()) {
                d += v[0];
                v.erase(v.begin());
            }
            else {
                d += v.back();
                v.pop_back();
            }
        }
    }

    cout << s << ' ' << d << ed;

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


// O(n)
// #include <bits/stdc++.h>
// using namespace std;

// #define ed '\n'
// #define ll long long int 
// #define mod 1000000007

// bool solve() {
    
//     int n; cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     int s = 0, d = 0, f = 1;
//     int l = 0, r = n - 1;
//     for (int i = 0; i < n; i++) {
//         if (f) {
//             if (v[l] > v[r]) {
//                 s += v[l];
//                 l++;
//             }
//             else {
//                 s += v[r];
//                 r--;
//             }
//             f = 0;
//         }
//         else {
//             if (v[l] > v[r]) {
//                 d += v[l];
//                 l++;
//             }
//             else {
//                 d += v[r];
//                 r--;
//             }
//             f = 1;
//         }
//     }

//     cout << s << ' ' << d << ed;
//     return true;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // int t;
//     // cin >> t;

//     // while(t--) {
//         solve();
//     // }
    
//     return 0;
// }

// //github.com/talha4t (Talha Mahmud)


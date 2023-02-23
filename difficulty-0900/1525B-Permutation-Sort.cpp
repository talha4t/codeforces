#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int mx = INT_MIN, mn = INT_MAX;

    vector<int> v;
    for (int i = 0;  i < n; i++) {
        int x; cin >> x;

        if (mx < x)
            mx = x;
        if (mn > x)
            mn = x;
        
        v.push_back(x);
    }

    int ct = 1;
    for (int i = 1; i < n; i++) {
        if (v[i - 1] < v[i])
            ct++;

    } 
    
    // If the array already sort then we dont need any operation/
    if (ct == n)
        cout << 0 << ed;
    /* If fist ele. is minimum and last ele. is max then it will
       need minimum 1 one operation to sort. Or if first ele. is minimum
       then its also need minium 1 operation to sort.
    */        
    else if ((v[0] == mn and v[n - 1] == mx) or v[0] == mn or v[n - 1] == mx)
        cout << 1 << ed;

    /* If first element is maximum and last is min. then the minimum 
       operation is 3 to sort.
    */ 
    else if (v[0] == mx and v[n - 1] == mn)
        cout << 3 << ed;
    /* If fist element is maximum and last one is not minimum or if 
       first ele. is not maximum and last ele. is not minimum or if 
       first ele. is not minimum and last element is not maximum then
       the maximum operation to sort this array is 2.
    */ 
    else if ((v[0] == mx and v[n - 1] != mn) or (v[0] != mx and v[n - 1] != mn)
             or (v[0] != mn and v[n - 1] != mx))
        cout << 2 << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)

#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1, s2, s3, s_sum;
    cin >> s1 >> s2 >> s3;

    s_sum = s1 + s2;
    
    sort(s_sum.begin(), s_sum.end());
    sort(s3.begin(), s3.end());

    if(s_sum == s3)
        cout << "YES";
    else 
        cout << "NO";


    return 0;
}

//github.com/talha4t (Talha Mahmud)

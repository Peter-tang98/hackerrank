
#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

typedef unsigned long long ll;
ll t, mod = 1e9 + 7;
int main() {
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        n%=mod;
        cout << (n * n) % (mod) << endl;
    }
    return 0;
}

//in
2
2
1

// out
4
1



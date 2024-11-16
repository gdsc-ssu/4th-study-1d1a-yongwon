#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int main() {
    ios::sync_with_stdio(false),cin.tie(NULL);
    string a,b,A,B;
    cin >> a >> b;
    for(int i=2;i>=0;i--) {
        A+=a[i];
        B+=b[i];
    }
    cout << max(A,B);
}

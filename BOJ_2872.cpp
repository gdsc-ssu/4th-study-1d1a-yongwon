#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int A[303030];

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n; cin >> n;
    for(int i=1;i<=n;i++)
        cin >> A[i];
    int ans = n;
    for(int j=n;j>=1;j--) {
        if(A[j]==ans)
            ans--;
    }
    cout << ans;

}

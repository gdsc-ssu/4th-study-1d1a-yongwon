#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

ll dp[111][21];
ll A[111];

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n; cin >> n;
    for(int i=1;i<=n;i++)
        cin >> A[i];
    dp[1][A[1]]=1;
    for(int i=2;i<n;i++) {
        for(int j=0;j<=20;j++) {
            if(dp[i-1][j]) {
                if(A[i]+j<=20) {
                    dp[i][j+A[i]]+=dp[i-1][j];
                }
                if(j-A[i]>=0) {
                    dp[i][j-A[i]]+=dp[i-1][j];
                }
            }
        }
    }

    cout << dp[n-1][A[n]];



}

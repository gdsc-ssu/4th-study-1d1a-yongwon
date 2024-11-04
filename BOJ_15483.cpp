#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int dp[1010][1010];

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=1;i<=s1.size();i++) {
        dp[0][i]=i;
    }
    for(int j=1;j<=s2.size();j++) {
        dp[j][0]=j;
    }
    // for(int i=0;i<=s1.size();i++) {
    //     for(int j=0;j<=s2.size();j++) {
    //         cout << dp[j][i] << " ";
    //     }
    //     cout << '\n';
    // }

    for(int i=1;i<=s1.size();i++) {
        for(int j=1;j<=s2.size();j++) {
            if(s1[i-1]==s2[j-1])
                dp[j][i] = dp[j-1][i-1];
            else
                dp[j][i] = min(dp[j-1][i-1],min(dp[j][i-1],dp[j-1][i]))+1;
        }
    }
    // for(int i=1;i<=s1.size();i++) {
    //     for(int j=1;j<=s2.size();j++) {
    //         cout << dp[j][i] << " ";
    //     }
    //     cout << '\n';
    // }
    cout << dp[s2.size()][s1.size()];
}

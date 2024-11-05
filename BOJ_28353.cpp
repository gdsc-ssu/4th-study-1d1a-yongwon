#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    ll n,k,cnt=0; cin >> n >> k;
    vector<ll>w(n);
    for(int i=0;i<n;i++)
        cin >> w[i];
    sort(w.begin(),w.end(),greater<int>());
    vector<bool>used(n);
    for(int i=0;i<n;i++) {
        if(used[i])continue;
        for(int j=i+1;j<n;j++) {
            if(used[j])continue;
            if(w[i]+w[j]<=k) {
                used[i]=used[j]=true;
                cnt++;
                // cout << w[i] << " " << w[j] << '\n';
                break;
            }
        }
    }
    cout << cnt;
}

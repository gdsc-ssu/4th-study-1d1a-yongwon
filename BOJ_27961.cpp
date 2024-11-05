#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    ll n=1,tmp=0,cnt=0;cin >> n;
    while(tmp<n) {
        if(tmp==0)
            tmp++;
        else
            tmp *=2;
        cnt++;
    }
    cout << cnt;

}

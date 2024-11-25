#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

bool isPrime[1010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k; cin >> n >> k;
    for(int i=2;i<=n;i++)
        isPrime[i]=true;
    int cnt=0;
    for(int i=2;i<=n;i++) {
        for(int j=i;j<=n;j+=i) {
            if(!isPrime[j])continue;
            isPrime[j]=false;
            cnt++;
            if(cnt==k) {
                cout << j;
                return 0;
            }
        }
    }
}

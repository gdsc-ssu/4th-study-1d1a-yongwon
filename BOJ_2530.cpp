#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int h, m, s, d;
    cin>>h>>m>>s>>d;
    cout<<(h+(m+(s+d)/60)/60)%24<<" "<<(m+(s+d)/60)%60<<" "<<(s+d)%60;
    return 0;
}

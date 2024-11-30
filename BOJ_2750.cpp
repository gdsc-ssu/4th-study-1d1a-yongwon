#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(auto iter : v) {
        cout << iter << '\n';
    }
}

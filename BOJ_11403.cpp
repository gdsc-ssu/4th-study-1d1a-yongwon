#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

vector<int>G[111];
bool vis[111];

void Dfs(int cur) {

    for(int i=0;i<G[cur].size();i++) {
        int nx = G[cur][i];
        // cout << nx << '\n';
        if(vis[nx])continue;
        vis[nx]=true;
        Dfs(nx);
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n; cin >> n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int num; cin >> num;
            if(num) {
                G[i].push_back(j);
            }
        }
    }

    for(int i=0;i<n;i++) {
        fill(vis, vis + n + 1, false);
        Dfs(i);
        for(int j=0;j<n;j++) {
            if(vis[j])cout << 1 <<" ";
            else cout << 0 << " ";
        }
        cout << '\n';
    }

}

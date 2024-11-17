#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

vector<pair<int,int>>G[101010];
bool vis[101010];
int n,st,ed;

void Dfs(int dep,int sum,int mx) {
    if(dep==ed) {
        cout << sum-mx;
        return ;
    }
    vis[dep]=true;
    for(int i=0;i<G[dep].size();i++) {
        auto nx = G[dep][i].first;
        auto cost = G[dep][i].second;
        if(vis[nx])continue;

        vis[nx]=true;
        Dfs(nx,sum+cost,max(mx,cost));

    }

}

int main() {
    ios::sync_with_stdio(false),cin.tie(NULL);
    cin >>n >> st >> ed;
    for(int i=1;i<n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }

    Dfs(st,0,0);


}

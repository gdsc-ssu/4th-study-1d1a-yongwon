#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

vector<int>G[101010];
bool vis[101010];
int P[101010];
int n;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void Bfs(int num) {
    if(vis[num])return;
    vis[num]=true;
    queue<int>q;
    q.push(num);
    while(!q.empty()) {
        auto cur = q.front();q.pop();
        for(int i=0;i<G[cur].size();i++) {
            int nx = G[cur][i];
            if(vis[nx])continue;
            if(nx<=0||nx>n)continue;
            vis[nx]=true;
            P[nx]=cur;
            q.push(nx);
        }

    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for(int i=0;i<n-1;i++) {
        int a,b; cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    Bfs(1);
    for(int i=2;i<=n;i++) {
        cout << P[i] << '\n';
    }
}
//
// Created by dld52 on 2024-11-07.
//

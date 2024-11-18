#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int n,m,vis[1010];
vector<int>G[1010],V;
bool flag=false;

void Dfs(int v) {
    vis[v]=1;
    for(auto iter : G[v]) {
        if(!vis[iter]) {
            Dfs(iter);
            if(flag)return;
        }else if(vis[iter]==1) {
            flag=true;
            return;
        }
    }
    vis[v]=2;
    V.push_back(v);
}

int main() {
    ios::sync_with_stdio(false),cin.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        int num,prev=0; cin >> num;
        for(int j=0;j<num;j++) {
            int cur; cin >> cur;
            if(prev) {
                G[prev].push_back(cur);
            }
            prev = cur;
        }
    }
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            Dfs(i);
            if(flag) {
                cout << 0;
                return 0;
            }
        }
    }

    reverse(V.begin(),V.end());
    for(auto iter : V)cout << iter << '\n';

}

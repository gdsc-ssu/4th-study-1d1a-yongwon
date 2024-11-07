#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int n,ans;
int A[111][111];
int C[111][111];
bool vis[111][111];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void Bfs(int x,int y) {

    vis[x][y] = true;
    queue<pair<int,int>>q;
    q.push({x,y});
    while(!q.empty()) {
        auto cur = q.front();q.pop();
        for(int dir=0;dir<4;dir++) {
            int nx = dx[dir] + cur.first;
            int ny = dy[dir] + cur.second;
            if(vis[nx][ny])continue;
            if(nx<=0||ny<=0||nx>n||ny>n)continue;
            if(C[nx][ny]<=0)continue;
            q.push({nx,ny});
            vis[nx][ny]=true;
        }
    }

}
void Find(int num) {
    int cnt=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            vis[i][j]=false;
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            C[i][j]=A[i][j];
            C[i][j]-=num;
            if(C[i][j]<=0)vis[i][j]=true;
        }
    }
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=n;j++) {
    //        cout << C[i][j] << " ";
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(!vis[i][j]&&C[i][j]>0) {
                Bfs(i,j);
                cnt++;
            }
        }
    }
    ans = max(ans,cnt);

}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    int mx=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cin >> A[i][j];
            mx = max(mx,A[i][j]);
        }
    }
    for(int i=0;i<=mx;i++) {
        Find(i);
    }
    cout << ans;

}

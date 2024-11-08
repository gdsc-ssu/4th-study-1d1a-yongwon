#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int w,h,ans;
int A[55][55];

bool vis[55][55];
int dx[] = {0,0,-1,1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};

void Bfs(int x,int y) {

    vis[x][y] = true;
    queue<pair<int,int>>q;
    q.push({x,y});
    while(!q.empty()) {
        auto cur = q.front();q.pop();
        for(int dir=0;dir<8;dir++) {
            int nx = dx[dir] + cur.first;
            int ny = dy[dir] + cur.second;
            if(nx<=0||ny<=0||nx>h||ny>w)continue;
            if(vis[nx][ny])continue;
            if(A[nx][ny]==0)continue;
            q.push({nx,ny});
            vis[nx][ny]=true;
        }
    }
}


int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);

    while(1) {
        cin >> w >> h;
        if(w==0&&h==0)
            break;
        for(int i=1;i<=50;i++) {
            for(int j=1;j<=50;j++) {
                A[i][j]=0;
                vis[i][j]=false;
            }
        }
        for(int i=1;i<=h;i++) {
            for(int j=1;j<=w;j++) {
                cin >> A[i][j];
            }
        }
        for(int i=1;i<=h;i++) {
            for(int j=1;j<=w;j++) {
                if(vis[i][j]==false&&A[i][j]==1) {
                    Bfs(i,j);
                    ans++;
                }
            }
        }
        cout << ans << '\n';
        ans=0;
    }

}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int dist[101010];
int cnt[101010];
int n,k;

void Bfs() {
    dist[n]=0;
    cnt[n]=1;
    queue<int>q;
    q.push(n);
    while(!q.empty()) {
        auto cur = q.front();q.pop();

        if(cur==k) {
            break;
        }

        for(auto nx :{cur+1,cur-1,cur*2}) {
            if(nx<0||nx>100000)continue;
            if(dist[nx]!=-1) {
                if(dist[cur]+1==dist[nx])
                    cnt[nx] += cnt[cur];
            }else {
                dist[nx] = dist[cur]+1;
                cnt[nx] = cnt[cur];
                q.push(nx);
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false),cin.tie(NULL);
    cin >> n>>k;
    fill(dist,dist+101010,-1);
    Bfs();
    cout << dist[k] << '\n' << cnt[k];

}

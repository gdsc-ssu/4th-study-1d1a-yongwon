#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int n,m;
int table[1010][1010];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int dist[1010][1010][2];

void Bfs() {
    memset(dist, -1, sizeof(dist));
    dist[1][1][0] = 1;
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 0});

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        int x = cur.first.first;
        int y = cur.first.second;
        int broken = cur.second;

        if (x == n && y == m) return;

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx <= 0 || ny <= 0 || nx > n || ny > m) continue;

            if (table[nx][ny] == 0 && dist[nx][ny][broken] == -1) {

                dist[nx][ny][broken] = dist[x][y][broken] + 1;
                q.push({{nx, ny}, broken});
            }
            else if (table[nx][ny] == 1 && broken == 0 && dist[nx][ny][1] == -1) {

                dist[nx][ny][1] = dist[x][y][broken] + 1;
                q.push({{nx, ny}, 1});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    string s;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        for (int j = 1; j <= m; j++) {
            table[i][j] = s[j - 1] - '0';
        }
    }

    Bfs();

    int result = -1;
    if (dist[n][m][0] != -1) result = dist[n][m][0];
    if (dist[n][m][1] != -1) result = (result == -1 ? dist[n][m][1] : min(result, dist[n][m][1]));

    cout << result << "\n";
}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int A[10];
int ans[10];
bool vis[10];
int n, m;
void Back(int num) {
    if(num==m) {
        for(int i=0;i<m;i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i=0;i<n;i++) {
        ans[num]=A[i];
        if(vis[i])continue;
        vis[i]=true;
        Back(num+1);
        vis[i]=false;
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> A[i];
    sort(A,A+n);

    Back(0);

}

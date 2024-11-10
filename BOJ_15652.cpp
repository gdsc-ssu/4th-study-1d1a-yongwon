#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int A[10];
bool vis[10];
int n, m;
void Back(int idx,int num) {
    if(num==m) {
        for(int i=0;i<m;i++) {
            cout << A[i] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i=idx;i<=n;i++) {
        A[num]=i;
        Back(i,num+1);
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    Back(1,0);

}

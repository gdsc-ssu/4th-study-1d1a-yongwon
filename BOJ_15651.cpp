#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int A[10];
bool vis[10];

void Back(int num,int m,int n) {
    if(num==m) {
        for(int i=0;i<m;i++)
            cout << A[i] << " ";
        cout << '\n';
        return;
    }

    for(int i=1;i<=n;i++) {

        A[num]=i;
        Back(num+1,m,n);

    }




}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n,m; cin >> n >> m;
    Back(0,m,n);


}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int A[10];
int ans[10];

int n, m;
void Back(int idx,int num) {
    if(num==m) {
        for(int i=0;i<m;i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i=idx;i<n;i++) {
        ans[num]=A[i];
        Back(i,num+1);
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> A[i];
    sort(A,A+n);

    Back(0,0);

}

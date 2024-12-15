#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,w,h;
    int t1,t2;
    cin >> x >> y >> w >> h;
    t1 = min(x,y);
    t2 = min(w-x,h-y);
    cout << min(t1,t2);


}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B, V,D;
    cin >> A >> B >> V;
    D = (V - B - 1) / (A - B) + 1;
    cout << D;
    return 0;
}

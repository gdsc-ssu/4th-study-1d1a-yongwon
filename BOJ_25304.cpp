#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, n;
    int a, b;
    int sum = 0;

    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += a * b;
    }

    if (x == sum)
        cout << "Yes";
    else
        cout << "No";

}

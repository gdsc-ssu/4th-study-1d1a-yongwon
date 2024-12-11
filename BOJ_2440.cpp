#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;

    for (int i = N; i > 0; i--) {
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << '\n';
    }


}

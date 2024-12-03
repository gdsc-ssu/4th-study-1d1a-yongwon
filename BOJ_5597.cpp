#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int arr[31];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;

    for(int i = 0; i < 28; i++) {
        cin >> a;
        arr[a] = 1;
    }

    for(int i = 1; i <= 30; i++) {
        if(!arr[i]) cout << i << '\n';
    }
}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;
int cnt[26];
int main() {
    ios::sync_with_stdio(false),cin.tie(NULL);
    string s;

    cin >> s;

    for (char i = 'a'; i <= 'z'; i++) {
        cout << (int)s.find(i) << ' ';
    }
}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

bool compare(char a,char b)
{
    return a > b;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    int N;
    cin >> N;
    a = to_string(N);
    sort(a.begin(),a.end(),compare);
    cout << a;
}

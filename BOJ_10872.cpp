#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int factorial(int n)
{
    if(n <= 1)
        return 1;
    return n * factorial(n-1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << factorial(n);


}

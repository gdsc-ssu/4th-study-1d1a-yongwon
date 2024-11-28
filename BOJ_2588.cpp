#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    int q=0,w=0,e=0,r=0;
    q= a*(b%10);
    w =  a * (b % 100 / 10);
    e = a * (b / 100);
    r = a * b;
    cout << q << '\n';
    cout << w << '\n';
    cout << e << '\n';
    cout << r << '\n';


}

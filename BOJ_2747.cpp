#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;

int memo[50];
int fibo(int n){
    if (n < 2)
        return n;
    else if(memo[n])
        return memo[n];
    else
        return memo[n] = fibo(n-1) + fibo(n-2);

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;


    cout << fibo(n);

}

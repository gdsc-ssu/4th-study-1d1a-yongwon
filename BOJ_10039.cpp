#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a=0,sum=0;
    for(int i=0;i<5;i++) {
        cin >> a;
        if(a<40)
            a=40;
        sum+=a;
    }
    cout << sum/5;
}

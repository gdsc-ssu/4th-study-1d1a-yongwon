#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int total=0;
    string s;cin >> s;

    for(int i=0;i<s.size();i++) {
        total+=((int)s[i]-65)/3 + 3;


        if(s[i] == 'S' ||s[i] == 'V' ||s[i] == 'Y' ||s[i] == 'Z' ) total--;
    }
    cout << total;

}

#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,tmp=""; cin >> s;
    int res=0;
    bool minus = false;
    for(int i=0;i<=s.size();i++) {
        if(i == s.size() || s[i]=='+'||s[i]=='-') {
            if(minus) {
                res-=stoi(tmp);

            }else {
                res+=stoi(tmp);

            }
            if(s[i]=='-')
                minus=true;
            tmp="";
        }else {
            tmp+=s[i];
        }
    }
    cout << res;
}

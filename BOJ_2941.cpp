#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int a;
    string s;
    cin >> s;

    for (int i =0; i<8; i++) {
        a = s.find(v[i]);
        for (; a != string::npos; a = s.find(v[i])) {
            s.replace(a, v[i].length(),"@");
        }
    }

    cout << s.length();

}

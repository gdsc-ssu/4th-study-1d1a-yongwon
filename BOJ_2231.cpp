#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int result = 0;
    cin >> N;

    for (int i = 1; i < N; i++) {
        int sum = 0;
        int num = i;
        while (num!= 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum + i == N) {
            result = i;
            break;
        }
    }

    cout << result;

}

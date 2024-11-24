#include <bits/stdc++.h>
#define ll long long
#define lld  long double
#define MOD  10007
#define INF 99999999
using namespace std;



int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    scanf("%d",&n);
    while(n--) {
        int num; double sum=0; scanf("%d",&num);
        vector<int>v(num);
        for(int i=0;i<num;i++) {
            scanf("%d",&v[i]);
            sum+=v[i];
        }
        double avg = sum / num;
        int cnt=0;

        for(int i=0;i<num;i++)
            if(v[i]>avg)cnt++;
        printf("%.3lf%%\n",(double)cnt/num*100);
    }

}

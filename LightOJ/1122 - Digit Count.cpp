#include <bits//stdc++.h>
using namespace std;
 
#define ll long long
#define MX 30010
#define pb push_back
 
int dp[12][12], a[12];
 
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   
    int test, n, m, x;
    scanf(" %d", &test);
   
    for(int ks = 0; ks < test; ks++)
    {
        scanf("%d %d", &n, &m);
 
 
 
        for(int i = 1; i <= n; i++) {
            scanf("%d", &x);
            a[x] = 1;
            dp[1][x] = 1;
        }
 
        for(int i = 2; i <= m; i++) {
            for(int j = 1; j <= 9; j++) {
                if(a[j]) dp[i][j] = 0;
                for(int k = 1; k <= 9; k++) {
                    if(a[k] && abs(j-k) <= 2) {
                        dp[i][j] += dp[i-1][k];
                        //cout << j << " " << k << " " << dp[i][j] << " x";
                    }
                }
                //puts("");
            }
            //puts("");
        }
 
        int an = 0;
 
        for(int i = 1; i <= 9; i++) if(a[i]) an += dp[m][i];
        printf("Case %d: %d\n", ks+1, an);
        memset(dp, 0, sizeof dp);
        memset(a, 0, sizeof a);
    }
    return 0;
}

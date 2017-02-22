#include <bits//stdc++.h>
using namespace std;
 
#define ll long long
#define MX 500
int lcs[MX][MX];
ll dp[MX][MX];
char a[MX], b[MX];
 
int LCSLength(int m , int n){
    int i, j;
 
    for (i = 0; i <= m; ++i)
    lcs[i][0] = i;
 
    for (j = 0; j <= n; ++j)
        lcs[0][j] = j;
 
    for (i = 1; i <= m; ++i){
        for (j = 1; j <= n; ++j){
            if (a[i-1] == b[j-1])
                lcs[i][j] = 1 + lcs[i-1][j-1];
            else
                lcs[i][j] = 1 + min (lcs[i-1][j], lcs[i][j-1]);
        }
    }
    return lcs[m][n];
}
 
ll solve(int m, int n)
{
    int i, j;
    for (i = 0; i <= m; ++i)
        dp[i][0] = 1;
 
    for (j = 0; j <= n; ++j)
        dp[0][j] = 1;
 
    for (i = 1; i <= m; ++i){
        for (j = 1; j <= n; ++j){
            if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else if(lcs[i][j-1] < lcs[i-1][j])
                dp[i][j] = dp[i][j-1];
            else if(lcs[i][j-1] > lcs[i-1][j])
                dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i][j-1] + dp[i-1][j];
        }
    }
    return dp[m][n];
}
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   
    int test;
    scanf(" %d", &test);
   
    for(int i = 0; i < test; i++)
    {
        int m, n;  
        scanf(" %s %s", a, b);
        m = strlen(a);
        n = strlen(b);
        int ans = LCSLength(m, n);
        ll ans2 = solve(m, n);
        printf("Case %d: %d %lld\n", i+1, ans, ans2);
    }
    return 0;
}

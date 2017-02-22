#include <bits//stdc++.h>
using namespace std;
 
#define ll long long
#define MX 111
int n, w, k, y[MX], b[MX], cnt[MX], dp[MX][MX];
 
int solve(int i, int l)
{
    if(i  >= n || l == 0) return 0;
    if(dp[i][l] != -1) return dp[i][l];
    int ret = max(solve(b[i], l-1)+ cnt[i], solve(i+1, l));
    dp[i][l] = ret;
    return dp[i][l];
}
 
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
   
    int test;
    scanf(" %d", &test);
   
    for(int ks = 0; ks < test; ks++)
    {
        scanf("%d %d %d", &n, &w, &k);
        int i, j, gar;
        for(i = 0; i < n; i++) scanf("%d %d", &gar, &y[i]);
       
        sort(y, y+n);
        memset(dp, -1, sizeof dp);
        for(i = 0; i < n; i++){
            for(j = i; j < n && y[j]-y[i] <= w; )j++;
            b[i] = j;
            cnt[i] = j - i;
        }
        int ans = solve(0, k);
        printf("Case %d: %d\n", ks+1, ans);
    }
    return 0;
}

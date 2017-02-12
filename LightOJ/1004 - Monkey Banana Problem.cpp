#include <bits//stdc++.h>
using namespace std;
 
int a[201][101], dp[201][101];
int main()
{
    int t;
    scanf("%d", &t);
 
    for(int k = 1; k <= t; k++)
    {
        int n, l;
        scanf("%d", &n);
        for(int i = 1; i <= 2*n-1; i++) {
            if(i <= n) l = i;
            else l = 2*n - i;
            for(int j = 1; j <= l; j++) {
                scanf("%d", &a[i][j]);
            }
            for(int j = 1; j <= l; j++) {
                if(i <= n)
                    dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i][j];
                else
                    dp[i][j] = max(dp[i-1][j+1], dp[i-1][j]) + a[i][j];
                //cout << dp[i][j] << endl;
            }
        }
        printf("Case %d: %d\n", k, dp[2*n-1][1]);
    }
    return 0;
}
